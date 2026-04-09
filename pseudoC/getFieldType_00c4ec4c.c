// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFieldType
// Entry Point: 00c4ec4c
// Size: 144 bytes
// Signature: undefined __thiscall getFieldType(IR_Type * this, char * param_1)


/* IR_Type::getFieldType(char const*) */

undefined8 __thiscall IR_Type::getFieldType(IR_Type *this,char *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(*(long *)(this + 8) + 0x30);
  lVar2 = *(long *)(*(long *)(this + 8) + 0x38) - lVar1;
  if (lVar2 != 0) {
    uVar4 = 0;
    uVar5 = (lVar2 >> 3) * 0x6db6db6db6db6db7;
    do {
      iVar3 = strcmp(*(char **)(lVar1 + uVar4 * 0x38),param_1);
      if (iVar3 == 0) {
        return *(undefined8 *)(lVar1 + uVar4 * 0x38 + 0x10);
      }
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 <= uVar5 && uVar5 - uVar4 != 0);
  }
  return 0;
}


