/** 
* @file         user_http_s.h 
* @brief        获取天气预报的相关函数声明
* @details      声明获取天气预报所需要的一些宏定义和函数
* @author       Helon_Chan 
* @par Copyright (c):  
*               红旭无线开发团队
* @par History:          
*               Ver0.0.1:
                     Helon_Chan, 2018/06/27, 初始化版本\n 
*/
#ifndef USER_HTTP_S_
#define USER_HTTP_S_


/*
===========================
宏定义
=========================== 
*/

/* 远程服务器的端口 */
#define REMOTE_PORT             "443"
/* 获取天气预报的地址 */
#define HTTPS_URL_BJ            "https://api.thinkpage.cn/v3/weather/now.json?key=24qbvr1mjsnukavo&location=beijing&language=zh-Hans&unit=c"
#define HTTPS_URL_SH            "https://www.sojson.com/open/api/weather/json.shtml?city=上海"
#define HTTPS_URL_GZ            "https://www.sojson.com/open/api/weather/json.shtml?city=广州"
#define HTTPS_URL_SZ            "https://wthrcdn.etouch.cn/weather_mini?city=%E6%B7%B1%E5%9C%B3"
/* GET请求 */
#define GET                     "GET /%s HTTP/1.1\r\nAccept:*/*\r\ncharset=utf-8\r\nHost:%s\r\n\r\n"
/* POST请求,此章节暂时不讲 */
#define POST                    "POST /%s HTTP/1.1\r\nAccept: */*\r\nContent-Length: %d\r\nContent-Type: application/x-www-form-urlencoded; charset=utf-8\r\nHost: %s\r\nConnection: Keep-Alive\r\n\r\n%s"
/* 这里的内容由用户自己填充,具体内容用户自己填充 */
#define POST_CONTENT            "example_content"


#define TAG                     "tls_client_handle"

/*
===========================
函数声明
=========================== 
*/

/** 
 * 发起HTTPS的GET请求
 * @param[in]   URL:HTTP的地址
 * @retval      0:成功
 *              -1:失败
 *              -2:URL解析失败
 *              -其他的值表示获取URL的IP失败
 * @par         修改日志 
 *               Ver0.0.1:
                     Helon_Chan, 2018/06/27, 初始化版本\n 
 */
int https_request_by_GET(char *URL);
#endif/* __USER_HTTPS_H__ */
