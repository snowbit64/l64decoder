// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processEventQueue
// Entry Point: 00c6f7e8
// Size: 252 bytes
// Signature: undefined processEventQueue(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidSysUtil::processEventQueue() */

void AndroidSysUtil::processEventQueue(void)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  AndroidInputDevice *this;
  undefined auStack_54 [4];
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  do {
    while( true ) {
      local_50 = 0;
      bVar2 = s_windowInitialized == '\0';
      bVar3 = s_isVisible != '\0';
      iVar4 = ALooper_pollAll((bVar2 || bVar3) - 1,0,auStack_54,&local_50);
      if (-1 < iVar4) break;
      if ((*(int *)(s_pApp + 100) != 0) || ((bVar2 || bVar3) && iVar4 == -3)) goto LAB_00c6f8b8;
    }
    if (local_50 == 0) {
      lVar5 = AndroidInputDevice::getInputDevice();
      if (lVar5 != 0) {
        this = (AndroidInputDevice *)AndroidInputDevice::getInputDevice();
        AndroidInputDevice::handleSensorEvent(this,iVar4);
      }
    }
    else {
      (**(code **)(local_50 + 0x10))(s_pApp);
    }
  } while (*(int *)(s_pApp + 100) == 0);
LAB_00c6f8b8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


