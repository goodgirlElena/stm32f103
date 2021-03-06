#ifndef __BSP_LCD_H
#define __BSP_LCD_H

#include "stm32f10x.h"	
#include "fonts.h"

/********LCD控制引脚************/
#define      FSMC_Bank_NORSRAMx		 FSMC_Bank1_NORSRAM1

#define      ILI9341_CMD_ADDR  		        (__IO uint16_t*)(0x60000000)
#define      ILI9341_DATA_ADDR  		(__IO uint16_t*)(0x60020000)

#define      LCD_CS_CLK                          RCC_APB2Periph_GPIOD  
#define      LCD_CS_GPIO_PORT                    GPIOD
#define      LCD_CS_GPIO_PIN                     GPIO_Pin_7

#define      LCD_RD_CLK                          RCC_APB2Periph_GPIOD  
#define      LCD_RD_GPIO_PORT                    GPIOD
#define      LCD_RD_GPIO_PIN                     GPIO_Pin_4

#define      LCD_WE_CLK                          RCC_APB2Periph_GPIOD  
#define      LCD_WE_GPIO_PORT                    GPIOD
#define      LCD_WE_GPIO_PIN                     GPIO_Pin_5

#define      LCD_RS_CLK                          RCC_APB2Periph_GPIOD  
#define      LCD_RS_GPIO_PORT                    GPIOD
#define      LCD_RS_GPIO_PIN                     GPIO_Pin_11

#define      LCD_RESTE_CLK                       RCC_APB2Periph_GPIOE  
#define      LCD_RESTE_GPIO_PORT                 GPIOE
#define      LCD_RESTE_GPIO_PIN                  GPIO_Pin_1

#define      LCD_BL_CLK                          RCC_APB2Periph_GPIOD  
#define      LCD_BL_GPIO_PORT                    GPIOD
#define      LCD_BL_GPIO_PIN                     GPIO_Pin_12

/********LCD数据线************/

#define      ILI9341_D0_CLK                RCC_APB2Periph_GPIOD   
#define      ILI9341_D0_PORT               GPIOD
#define      ILI9341_D0_PIN                GPIO_Pin_14

#define      ILI9341_D1_CLK                RCC_APB2Periph_GPIOD   
#define      ILI9341_D1_PORT               GPIOD
#define      ILI9341_D1_PIN                GPIO_Pin_15

#define      ILI9341_D2_CLK                RCC_APB2Periph_GPIOD   
#define      ILI9341_D2_PORT               GPIOD
#define      ILI9341_D2_PIN                GPIO_Pin_0

#define      ILI9341_D3_CLK                RCC_APB2Periph_GPIOD  
#define      ILI9341_D3_PORT               GPIOD
#define      ILI9341_D3_PIN                GPIO_Pin_1

#define      ILI9341_D4_CLK                RCC_APB2Periph_GPIOE   
#define      ILI9341_D4_PORT               GPIOE
#define      ILI9341_D4_PIN                GPIO_Pin_7

#define      ILI9341_D5_CLK                RCC_APB2Periph_GPIOE   
#define      ILI9341_D5_PORT               GPIOE
#define      ILI9341_D5_PIN                GPIO_Pin_8

#define      ILI9341_D6_CLK                RCC_APB2Periph_GPIOE   
#define      ILI9341_D6_PORT               GPIOE
#define      ILI9341_D6_PIN                GPIO_Pin_9

#define      ILI9341_D7_CLK                RCC_APB2Periph_GPIOE  
#define      ILI9341_D7_PORT               GPIOE
#define      ILI9341_D7_PIN                GPIO_Pin_10

#define      ILI9341_D8_CLK                RCC_APB2Periph_GPIOE   
#define      ILI9341_D8_PORT               GPIOE
#define      ILI9341_D8_PIN                GPIO_Pin_11

#define      ILI9341_D9_CLK                RCC_APB2Periph_GPIOE   
#define      ILI9341_D9_PORT               GPIOE
#define      ILI9341_D9_PIN                GPIO_Pin_12

#define      ILI9341_D10_CLK                RCC_APB2Periph_GPIOE   
#define      ILI9341_D10_PORT               GPIOE
#define      ILI9341_D10_PIN                GPIO_Pin_13

#define      ILI9341_D11_CLK                RCC_APB2Periph_GPIOE   
#define      ILI9341_D11_PORT               GPIOE
#define      ILI9341_D11_PIN                GPIO_Pin_14

#define      ILI9341_D12_CLK                RCC_APB2Periph_GPIOE   
#define      ILI9341_D12_PORT               GPIOE
#define      ILI9341_D12_PIN                GPIO_Pin_15

#define      ILI9341_D13_CLK                RCC_APB2Periph_GPIOD   
#define      ILI9341_D13_PORT               GPIOD
#define      ILI9341_D13_PIN                GPIO_Pin_8

#define      ILI9341_D14_CLK                RCC_APB2Periph_GPIOD   
#define      ILI9341_D14_PORT               GPIOD
#define      ILI9341_D14_PIN                GPIO_Pin_9

#define      ILI9341_D15_CLK                RCC_APB2Periph_GPIOD   
#define      ILI9341_D15_PORT               GPIOD
#define      ILI9341_D15_PIN                GPIO_Pin_10

/*************************************** 调试预用 ******************************************/
#define      DEBUG_DELAY()                

/***************************** ILI934 显示区域的起始坐标和总行列数 ***************************/
#define      ILI9341_DispWindow_X_Star	        0     //起始点的X坐标
#define      ILI9341_DispWindow_Y_Star	        0     //起始点的Y坐标

#define      ILI9341_LESS_PIXEL	  		240	//液晶屏较短方向的像素宽度
#define      ILI9341_MORE_PIXEL	 		320	//液晶屏较长方向的像素宽度



/******************************* 定义 ILI934 显示屏常用颜色 ********************************/
#define      BACKGROUND		                WHITE   //默认背景颜色

#define      WHITE			   0xFFFF	   //白色
#define      BLACK                         0x0000	   //黑色 
#define      GREY                          0xF7DE	   //灰色 
#define      BLUE                          0x001F	   //蓝色 
#define      BLUE2                         0x051F	   //浅蓝色 
#define      RED                           0xF800	   //红色 
#define      MAGENTA                       0xF81F	   //红紫色，洋红色 
#define      GREEN                         0x07E0	   //绿色 
#define      CYAN                          0x7FFF	   //蓝绿色，青色 
#define      YELLOW                        0xFFE0	   //黄色 
#define      BRED                          0xF81F
#define      GRED                          0xFFE0
#define      GBLUE                         0x07FF
#define      ORANGE			   0xFFA0	   //橙色

#define RGB888_2_RGB565(R,G,B)		 (uint16_t)(((R & 0x1F) << 11) | ((G & 0x3F) << 5) | (B & 0x1F) )



/******************************* 定义 ILI934 常用命令 ********************************/
#define      CMD_SetCoordinateX		 	0x2A	     //设置X坐标
#define      CMD_SetCoordinateY		 	0x2B	     //设置Y坐标
#define      CMD_SetPixel		 	0x2C	     //填充像素

/********************************** 函数声明 ***************************************/
void LCD_Init(void);
uint8_t Read_Format(void);
void LCD_OpenWindow(uint16_t usX,uint16_t usY,uint16_t usWidth,uint16_t usHeight);
void LCD_DispChar_EN ( uint16_t usX, uint16_t usY, const char cChar );
void LCD_DispStringLine_EN (  uint16_t line,  char * pStr );
void LCD_DispChar_CH ( uint16_t usX, uint16_t usY, uint16_t usChar );
void LCD_GramScan ( uint8_t ucOption );
void LCD_DispString_CH ( uint16_t usX , uint16_t usY, char * pStr );
void LCD_DispString_EN_CH ( uint16_t usX , uint16_t usY, char * pStr );
void LCD_DispStringLine_EN_CH (  uint16_t line, char * pStr );
void LCD_Clear ( uint16_t usX, uint16_t usY, uint16_t usWidth, uint16_t usHeight );
void LCD_ClearLine(uint16_t Line);
void LCD_SetPointPixel ( uint16_t usX, uint16_t usY );
void LCD_SetColors(uint16_t TextColor, uint16_t BackColor) ;
void LCD_SetFont(sFONT *fonts);
sFONT *LCD_GetFont(void);
void LCD_DrawChar_Ex(uint16_t usX, uint16_t usY, uint16_t Font_width, uint16_t Font_Height,uint8_t *c,uint16_t DrawModel);
void LCD_DisplayStringEx(uint16_t x,  uint16_t y,uint16_t Font_width,uint16_t Font_Height,	uint8_t *ptr,uint16_t DrawModel) ;
void LCD_zoomChar(uint16_t in_width,uint16_t in_heig,uint16_t out_width,	
 uint16_t out_heig,uint8_t *in_ptr,uint8_t *out_ptr, uint8_t en_cn);
void Delay ( __IO uint32_t nCount );
void LCD_DrawLine ( uint16_t usX1, uint16_t usY1, uint16_t usX2, uint16_t usY2 );
void LCD_DrawRectangle ( uint16_t usX_Start, uint16_t usY_Start, uint16_t usWidth, uint16_t usHeight, uint8_t ucFilled );
void LCD_SetTextColor(uint16_t Color);

#endif /* __BSP_LCD_H*/
