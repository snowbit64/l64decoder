// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unloadInfoLayer
// Entry Point: 008ea7ec
// Size: 192 bytes
// Signature: undefined __thiscall unloadInfoLayer(BaseTerrain * this, uint param_1)


/* BaseTerrain::unloadInfoLayer(unsigned int) */

void __thiscall BaseTerrain::unloadInfoLayer(BaseTerrain *this,uint param_1)

{
  long *plVar1;
  long lVar2;
  InfoLayer *pIVar3;
  InfoLayer *this_00;
  InfoLayer *pIVar4;
  InfoLayer *pIVar5;
  
  lVar2 = *(long *)(this + 0x50);
  plVar1 = *(long **)(lVar2 + (ulong)param_1 * 0x58 + 0x38);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
    lVar2 = *(long *)(this + 0x50);
  }
  pIVar5 = *(InfoLayer **)(this + 0x58);
  pIVar3 = (InfoLayer *)(lVar2 + (ulong)param_1 * 0x58);
  pIVar4 = pIVar3 + 0x58;
  this_00 = pIVar3;
  if (pIVar4 != pIVar5) {
    do {
      pIVar3 = this_00 + 0x58;
      InfoLayer::operator=(this_00,pIVar3);
      pIVar4 = this_00 + 0xb0;
      this_00 = pIVar3;
    } while (pIVar4 != pIVar5);
    pIVar4 = *(InfoLayer **)(this + 0x58);
    if (pIVar3 == pIVar4) goto LAB_008ea894;
  }
  do {
    pIVar4 = pIVar4 + -0x58;
    FUN_008ece30(this + 0x60,pIVar4);
  } while (pIVar4 != pIVar3);
LAB_008ea894:
  *(InfoLayer **)(this + 0x58) = pIVar3;
  return;
}


