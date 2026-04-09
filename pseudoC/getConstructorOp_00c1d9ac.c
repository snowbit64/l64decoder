// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getConstructorOp
// Entry Point: 00c1d9ac
// Size: 488 bytes
// Signature: undefined __thiscall getConstructorOp(GISLParserContext * this, SHC_Type * param_1)


/* GISLParserContext::getConstructorOp(SHC_Type const&) */

int __thiscall GISLParserContext::getConstructorOp(GISLParserContext *this,SHC_Type *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  iVar1 = *piVar2;
  if (iVar1 == 3) {
    return 0x86;
  }
  if (iVar1 == 4) {
    return 0x87;
  }
  if (iVar1 == 6) {
    return 0x88;
  }
  if (iVar1 < 3) {
    switch(piVar2[2]) {
    case 3:
      if (iVar1 == 0) {
        return 0x6c;
      }
      if (iVar1 == 1) {
        return piVar2[5] + 0x6b;
      }
      if (iVar1 != 2) {
        return 0x6b;
      }
      return piVar2[4] + piVar2[5] * 3 + 0x6c;
    case 4:
      if (iVar1 == 0) {
        return 0x70;
      }
      if (iVar1 == 1) {
        return piVar2[5] + 0x6f;
      }
      if (iVar1 != 2) {
        return 0x6f;
      }
      return piVar2[4] + piVar2[5] * 3 + 0x75;
    case 5:
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          return 0x58;
        }
        if (iVar1 != 1) {
          return 0x57;
        }
        return piVar2[5] + 0x57;
      }
      break;
    case 6:
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          return 0x5c;
        }
        if (iVar1 != 1) {
          return 0x5b;
        }
        return piVar2[5] + 0x5b;
      }
      break;
    case 7:
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          return 0x60;
        }
        if (iVar1 != 1) {
          return 0x5f;
        }
        return piVar2[5] + 0x5f;
      }
      break;
    case 8:
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          return 100;
        }
        if (iVar1 != 1) {
          return 99;
        }
        return piVar2[5] + 99;
      }
      break;
    case 9:
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          return 0x68;
        }
        if (iVar1 != 1) {
          return 0x67;
        }
        return piVar2[5] + 0x67;
      }
    }
  }
  return 0;
}


