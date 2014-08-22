//
//  ScreenmasterAudio.c
//  ScreenmasterAudio
//
//  Created by Nax on 22.08.14.
//  Copyright (c) 2014 Ninevillage. All rights reserved.
//

#include <mach/mach_types.h>

kern_return_t ScreenmasterAudio_start(kmod_info_t * ki, void *d);
kern_return_t ScreenmasterAudio_stop(kmod_info_t *ki, void *d);

kern_return_t ScreenmasterAudio_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t ScreenmasterAudio_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
