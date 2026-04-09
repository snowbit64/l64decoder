// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChar
// Entry Point: 00b90a5c
// Size: 356 bytes
// Signature: undefined __thiscall getChar(Preprocessor * this, uint param_1)


/* Preprocessor::getChar(unsigned int) */

void __thiscall Preprocessor::getChar(Preprocessor *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined uVar4;
  int iVar5;
  char cVar6;
  long *plVar7;
  char *pcVar8;
  char local_3c [4];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  plVar7 = *(long **)(this + 0x38);
  if (plVar7[4] == 0) {
    if (*(uint *)((long)plVar7 + 0x14) <= param_1) {
      uVar4 = 0;
      goto LAB_00b90b90;
    }
  }
  else {
    extendBuffer(this,param_1);
    while (plVar7 = *(long **)(this + 0x38), *(uint *)((long)plVar7 + 0x14) <= param_1) {
      iVar5 = (**(code **)(*(long *)plVar7[4] + 0x28))((long *)plVar7[4],local_3c,1);
      while (0 < iVar5) {
        cVar6 = local_3c[0];
        if (local_3c[0] != '\r') goto LAB_00b90aa0;
        iVar5 = (**(code **)(**(long **)(*(long *)(this + 0x38) + 0x20) + 0x28))
                          (*(long **)(*(long *)(this + 0x38) + 0x20),local_3c,1);
      }
      cVar6 = '\0';
LAB_00b90aa0:
      plVar7 = *(long **)(this + 0x38);
      uVar2 = *(uint *)((long)plVar7 + 0x14);
      *(uint *)((long)plVar7 + 0x14) = uVar2 + 1;
      *(char *)(*plVar7 + (ulong)uVar2) = cVar6;
    }
  }
  uVar2 = *(uint *)(plVar7 + 9);
  if (uVar2 <= param_1) {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar2 - 1;
    }
    if (uVar1 < param_1) {
      pcVar8 = (char *)(*plVar7 + (ulong)uVar1);
      iVar5 = param_1 - uVar1;
      do {
        if (*pcVar8 == '\n') {
          *(int *)((long)plVar7 + 0x44) = *(int *)((long)plVar7 + 0x44) + 1;
        }
        pcVar8 = pcVar8 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(uint *)(plVar7 + 9) = param_1 + 1;
  }
  uVar4 = *(undefined *)(*plVar7 + (ulong)param_1);
LAB_00b90b90:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


