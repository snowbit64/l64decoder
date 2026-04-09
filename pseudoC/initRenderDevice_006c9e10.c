// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initRenderDevice
// Entry Point: 006c9e10
// Size: 280 bytes
// Signature: undefined __thiscall initRenderDevice(Application * this, RENDERDEVICE_TYPE param_1)


/* Application::initRenderDevice(RenderDeviceManager::RENDERDEVICE_TYPE) */

void __thiscall Application::initRenderDevice(Application *this,RENDERDEVICE_TYPE param_1)

{
  Application *pAVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  RenderDeviceManager *pRVar5;
  long *plVar6;
  ulong uVar7;
  LanguageStringManager *pLVar8;
  ulong local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  RenderDeviceManager::getInstance();
  pRVar5 = (RenderDeviceManager *)RenderDeviceManager::getInstance();
  plVar6 = (long *)RenderDeviceManager::createRenderDevice(pRVar5,param_1);
  *(long **)(this + 0x170) = plVar6;
  uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,1);
  if ((uVar7 & 1) == 0) {
    local_50 = 0;
    uStack_48 = 0;
    local_40 = (char *)0x0;
                    /* try { // try from 006c9e98 to 006c9f23 has its CatchHandler @ 006c9f28 */
    iVar4 = (**(code **)(**(long **)(this + 0x170) + 0x20))();
    if (iVar4 == 8) {
      pLVar8 = (LanguageStringManager *)LanguageStringManager::getInstance();
      LanguageStringManager::getString(pLVar8,1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_50);
    }
    else {
      pLVar8 = (LanguageStringManager *)LanguageStringManager::getInstance();
      LanguageStringManager::getString(pLVar8,0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_50);
    }
    pAVar1 = this + 0x1a9;
    if (((byte)this[0x1a8] & 1) != 0) {
      pAVar1 = *(Application **)(this + 0x1b8);
    }
    pcVar2 = (char *)((ulong)&local_50 | 1);
    if ((local_50 & 1) != 0) {
      pcVar2 = local_40;
    }
    uVar7 = SystemDialogUtil::showMessageBoxYesNo((char *)pAVar1,pcVar2,false);
    if ((uVar7 & 1) != 0) {
      WebUtil::openURL("http://farming-simulator.com/gpuDriverDownload.php");
    }
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


