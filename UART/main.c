#include"types.h"
#include"hw_uart.h"
#include"dd_uart.h"

int main(void)
{
Enable_UART_TX();
Disable_UART_TX();
Enable_UART_RX();
Disable_UART_RX();
Enable_UART_UDRE_Interrupt();
Disable_UART_UDRE_Interrupt();
Enable_UART_TX_Interrupt();
Disable_UART_TX_Interrupt();
Enable_UART_RX_Interrupt();
Disable_UART_RX_Interrupt();
Set_UART_Default_Bit_Size();
Set_UART_Default_Parity();
Set_UART_Default_Stop_Bit();

return 0;
}

  
