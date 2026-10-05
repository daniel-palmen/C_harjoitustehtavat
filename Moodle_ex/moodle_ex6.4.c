#include <stdio.h>
#define SLIP_END 0xC0
#define SLIP_ESC 0xDB
#define SLIP_ESC_END 0xDC
#define SLIP_ESC_ESC 0xDD

static void (*slip_callback)(const unsigned char *, int) = NULL;

void register_slip_frame_callback(void (*callback)(const unsigned char *, int))
{
    slip_callback = callback;
}
void process_slip_data(int (*reader)(void))
{
    unsigned char frame[40];
    int length = 0;
    int byte;
    int escaped = 0;

    while ((byte = reader()) != EOF) {

        if (byte == SLIP_END) {
            if (length > 0) {
                if (slip_callback != NULL) {
                    slip_callback(frame, length);
                }

                length = 0;
            }

            escaped = 0;
            continue;
        }

        if (byte == SLIP_ESC) {
            escaped = 1;
            continue;
        }

        if (escaped) {
            if (byte == SLIP_ESC_END) {
                byte = SLIP_END;
            }
            else if (byte == SLIP_ESC_ESC) {
                byte = SLIP_ESC;
            }

            escaped = 0;
        }

        if (length < 40) {
            frame[length] = (unsigned char)byte;
            length++;
        }
    }
}

int main(){

}