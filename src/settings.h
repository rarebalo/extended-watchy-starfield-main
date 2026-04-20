#ifndef SETTINGS_H
#define SETTINGS_H

// =================================================================================
#define NTP_SERVER "south-america.pool.ntp.org"
#define GMT_OFFSET_SEC -14400L

#define DISPLAYTYPE 1
// 1 == correct working display
// 0 == not working display

#define HOUR24 true
#define METRIC true
// ... you have also set your weather url to unit=imperial
#define LOC -26.813, -65.295, -3.0
#define LOC_TZ -4.0
#define POLARFUNCTIONS false
#define OPENWEATHERMAP_URL "https://api.openweathermap.org/data/3.0/onecall?lat=-26.813&lon=-65.295&exclude=minutely,hourly,daily,alerts&appid=5963e3487a98a84de9cac648ef8c7b99&units=metric&lang=es" // open weather api
#define WLAN_SSID "casaR2.4"
#define WLAN_PWD "4252619casa"
// power saving WLAN configuration if wanted:
#define USE_STATIC_IP false
#if USE_STATIC_IP
	#define WLAN_IP "192.168.0.199"	// enter a static ip address outside of the routers dynamic range
	#define WLAN_GATEWAY "192.168.0.1" // only needed if WLAN_IP is not an empty string
	#define WLAN_SUBNET "255.255.255.0" // only needed if WLAN_IP is not an empty string
	#define WLAN_DNS "192.168.0.199" // only needed if WLAN_IP is not an empty string, perhaps use GATEWAY IP to speed up
#endif

#define WEEKDAY_SUN "Domingo"
#define WEEKDAY_MON "Lunes"
#define WEEKDAY_TUS "Martes"
#define WEEKDAY_WEN "Miercoles"
#define WEEKDAY_THU "Jueves"
#define WEEKDAY_FRI "Viernes"
#define WEEKDAY_SAT "Sabado"
#define WEEKDAY_MAXNoOFCHARS 3
#define MONTH_JAN "Ene"
#define MONTH_FEB "Feb"
#define MONTH_MAR "Mar"
#define MONTH_APR "Apr"
#define MONTH_MAY "May"
#define MONTH_JUN "Jun"
#define MONTH_JUL "Jul"
#define MONTH_AUG "Aug"
#define MONTH_SEP "Sep"
#define MONTH_OCT "Oct"
#define MONTH_NOV "Nov"
#define MONTH_DEC "Dic"

// =================================================================================

#define EXPAND_MACRO(x) x
#define GET_LATITUDE_IMPL(A, B, C) A
#define GET_LONGITUDE_IMPL(A, B, C) B
#define GET_TIMEZONE_IMPL(A, B, C) C
#define PASS_LOC(M) M
#define GET_LATITUDE(M) EXPAND_MACRO(GET_LATITUDE_IMPL M)
#define GET_LONGITUDE(M) EXPAND_MACRO(GET_LONGITUDE_IMPL M)
#define GET_TIMEZONE(M) EXPAND_MACRO(GET_TIMEZONE_IMPL M)

#define IS_NORTH GET_LATITUDE((LOC)) > 0

#endif