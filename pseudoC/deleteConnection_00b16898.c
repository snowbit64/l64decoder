// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteConnection
// Entry Point: 00b16898
// Size: 252 bytes
// Signature: undefined __thiscall deleteConnection(VoiceChatManager * this, int param_1)


/* VoiceChatManager::deleteConnection(int) */

void __thiscall VoiceChatManager::deleteConnection(VoiceChatManager *this,int param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long **pplVar7;
  
  lVar5 = *(long *)(this + 0x1490);
  lVar6 = (long)param_1;
  pplVar7 = (long **)(lVar5 + (long)param_1 * 0x70 + 0x60);
  plVar1 = *pplVar7;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))(0,0);
    plVar1 = *pplVar7;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = *(long **)(lVar5 + lVar6 * 0x70 + 0x58);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = *(long **)(lVar5 + lVar6 * 0x70 + 0x50);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  plVar1 = (long *)operator_new(0x18);
  lVar4 = *(long *)(this + 0x1488);
  lVar2 = *(long *)(this + 0x1490);
  lVar3 = *(long *)(this + 0x1478);
  *(undefined *)(plVar1 + 2) = *(undefined *)(lVar5 + lVar6 * 0x70 + 0x6c);
  *(long **)(this + 0x1478) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)(this + 0x1478);
  *(long *)(this + 0x1488) = lVar4 + 1;
  *(long **)(lVar3 + 8) = plVar1;
  FUN_00b17dbc(this + 0x1490,lVar2 + lVar6 * 0x70);
  return;
}


