// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e64d0
// Entry Point: 006e64d0
// Size: 360 bytes
// Signature: undefined FUN_006e64d0(void)


void FUN_006e64d0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long *this;
  int local_50;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this = *(long **)(GameScriptBinding::s_pApplication + 0x188);
  iVar3 = Properties::getInt((Properties *)this,"game.graphic.display.width",0);
  iVar4 = Properties::getInt((Properties *)this,"game.graphic.display.height",0);
  if (iVar3 != 0 && iVar4 != 0) {
    Properties::setInt((Properties *)this,"game.graphic.display.previousWidth",iVar3);
    Properties::setInt((Properties *)this,"game.graphic.display.previousHeight",iVar4);
  }
  RenderDeviceManager::getInstance();
  plVar6 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  uVar1 = *param_1;
  uVar5 = (**(code **)(*plVar6 + 0x68))();
  if ((uVar1 < uVar5) &&
     (((**(code **)(*plVar6 + 0x70))(plVar6,uVar1,&local_4c,&local_50), iVar3 != local_4c ||
      (iVar4 != local_50)))) {
    Properties::setInt((Properties *)this,"game.graphic.display.width",local_4c);
    Properties::setInt((Properties *)this,"game.graphic.display.height",local_50);
    Properties::setBool((Properties *)this,"game.graphic.display.userConfirmed",false);
  }
  (**(code **)(*this + 0x30))(this);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


