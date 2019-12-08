//**********************************************************************
//
// Copyright (c) 2005
// PathEngine
// Lyon, France
//
// All Rights Reserved
//
//**********************************************************************

#pragma once

#include "platform_common/Mutex.h"

class cMutexLock
{
    const cMutex& _toLock;

    // prevent copying and assignment
    cMutexLock(const cMutexLock&);
    const cMutexLock& operator=(const cMutexLock&);

public:

    cMutexLock(const cMutex& toLock) :
     _toLock(toLock)
    {
        _toLock.lock();
    }
    ~cMutexLock()
    {
        _toLock.unlock();
    }
};

