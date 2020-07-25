#include <stdio.h>
int main()
{
    int hora_d, min_d, seg_d, hora_a, min_a, seg_a, hora_s, min_s, seg_s, t_segd, t_sega, t_segs;
    scanf("%d %d %d\n", &hora_d, &min_d, &seg_d);
    scanf("%d %d %d", &hora_a, &min_a, &seg_a);
    
    hora_d = hora_d * 3600;
    min_d = min_d * 60;
    t_segd = (hora_d + min_d + seg_d);
    
    hora_a = hora_a * 3600;
    min_a = min_a * 60;
    t_sega = (hora_a + min_a + seg_a);
    
    t_segs = t_sega - t_segd;
    if (t_segs < 0)
        t_segs = t_segs + (24 *3600);
        
        
    hora_s = t_segs / 3600;
    min_s = (t_segs % 3600) / 60;
    seg_s = (t_segs % 60);
        
    printf("%d %d %d", hora_s, min_s, seg_s);
}