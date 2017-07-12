#ifndef PLATFORM_H
#define PLATFORM_H

#include <Energia.h>
#include <xdc/runtime/Error.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Mailbox.h>
#include <stdio.h>

// State definition
#define IDLE    0
#define ID      1
#define FUNC    2
#define PARAM   3
#define END     4

#endif PLATFORM_H

