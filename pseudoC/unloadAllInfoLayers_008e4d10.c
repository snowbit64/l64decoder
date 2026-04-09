// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unloadAllInfoLayers
// Entry Point: 008e4d10
// Size: 260 bytes
// Signature: undefined unloadAllInfoLayers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BaseTerrain::unloadAllInfoLayers() */

void BaseTerrain::unloadAllInfoLayers(void)

{
  InfoLayer *pIVar1;
  long in_x0;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  InfoLayer *pIVar5;
  InfoLayer *this;
  InfoLayer *pIVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(in_x0 + 0x50);
  pIVar5 = *(InfoLayer **)(in_x0 + 0x58);
  uVar4 = ((long)pIVar5 - lVar3 >> 3) * 0xba2e8ba3;
  if ((int)uVar4 < 1) {
    return;
  }
  uVar4 = uVar4 & 0xffffffff;
  do {
    uVar7 = uVar4 - 1 & 0xffffffff;
    plVar2 = *(long **)(lVar3 + uVar7 * 0x58 + 0x38);
    pIVar6 = pIVar5;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
      lVar3 = *(long *)(in_x0 + 0x50);
      pIVar6 = *(InfoLayer **)(in_x0 + 0x58);
    }
    pIVar5 = (InfoLayer *)(lVar3 + uVar7 * 0x58);
    this = pIVar5;
    if (pIVar5 + 0x58 == pIVar6) {
LAB_008e4dcc:
      do {
        pIVar6 = pIVar6 + -0x58;
        FUN_008ece30(in_x0 + 0x60,pIVar6);
      } while (pIVar6 != pIVar5);
    }
    else {
      do {
        pIVar5 = this + 0x58;
        InfoLayer::operator=(this,pIVar5);
        pIVar1 = this + 0xb0;
        this = pIVar5;
      } while (pIVar1 != pIVar6);
      pIVar6 = *(InfoLayer **)(in_x0 + 0x58);
      if (pIVar5 != pIVar6) goto LAB_008e4dcc;
    }
    *(InfoLayer **)(in_x0 + 0x58) = pIVar5;
    if ((long)uVar4 < 2) {
      return;
    }
    lVar3 = *(long *)(in_x0 + 0x50);
    uVar4 = uVar4 - 1;
  } while( true );
}


