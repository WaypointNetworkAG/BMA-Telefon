/* Author: Noa Sendlhofer - noa.sendlhofer@wpn.ch
 * Desc: Input class header
 */

#ifndef BMA_TELEFON_INPUT_H_
#define BMA_TELEFON_INPUT_H_

typedef int PORT;

class Input
{
public:
    Input(PORT port);
    bool readButton();
    bool readAnalog();

private:
    PORT port;
    bool _pressed = false;
};

#endif // BMA_TELEFON_INPUT_H_