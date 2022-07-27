//
//  NSWAppStyle.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]
#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]

#define JMColor_DarkGray RGBCOLOR(102.f, 102.f, 102.f)

#define JMColor_JumioGreen RGBCOLOR(151.0, 190.0, 13.0)
#define JMColor_ButtonDisabled RGBCOLOR(127.0, 127.0, 127.0)
#define JMColor_lightCellBackground RGBACOLOR(255.0, 255.0, 255.0, .3f)

#define JMColor_StdTextColor [UIColor colorWithWhite: 0.0 alpha: 0.65]
#define JMColor_StdTextColorDarker [UIColor colorWithWhite: 0.0 alpha: 1.0]
#define JMColor_LightTextColor [UIColor colorWithWhite: 1.0 alpha: 0.65]

#define JMColor_White [UIColor colorWithWhite: 1.0 alpha: 1.0]
#define JMColor_WhiteDarker [UIColor colorWithWhite: 1.0 alpha: 0.8]

#define JMColor_BAMTextColor [UIColor colorWithWhite: 0.0 alpha: 0.8]
#define JMColor_BAMTextColorDarker [UIColor colorWithWhite: 0.0 alpha: 0.85]
