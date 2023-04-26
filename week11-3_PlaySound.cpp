
#include <windows.h>
int main()
{
    PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\do.wav",NULL,SND_SYNC);//第三個參數SYNC等待同步,以免瞬間結束
    PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\re.wav",NULL,SND_SYNC);
    PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\mi.wav",NULL,SND_SYNC);
}
