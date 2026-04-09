// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findConstantBufferStructField
// Entry Point: 00c53f54
// Size: 208 bytes
// Signature: undefined __thiscall findConstantBufferStructField(IR_TypeSet * this, char * param_1)


/* IR_TypeSet::findConstantBufferStructField(char const*) */

long __thiscall IR_TypeSet::findConstantBufferStructField(IR_TypeSet *this,char *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar6 = *(long *)(this + 0xda0);
  lVar2 = *(long *)(this + 0xda8) - lVar6;
  if (lVar2 != 0) {
    uVar7 = 0;
    do {
      lVar5 = *(long *)(lVar6 + uVar7 * 0x10);
      lVar4 = *(long *)(lVar5 + 8);
      if (*(char *)(lVar4 + 0x52) != '\0') {
        lVar1 = *(long *)(lVar4 + 0x30);
        lVar4 = *(long *)(lVar4 + 0x38) - lVar1;
        if (lVar4 != 0) {
          uVar9 = 0;
          uVar8 = (lVar4 >> 3) * 0x6db6db6db6db6db7;
          do {
            iVar3 = strcmp(*(char **)(lVar1 + uVar9 * 0x38),param_1);
            if (iVar3 == 0) {
              return lVar5;
            }
            uVar9 = (ulong)((int)uVar9 + 1);
          } while (uVar9 <= uVar8 && uVar8 - uVar9 != 0);
        }
      }
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)(lVar2 >> 4));
  }
  return 0;
}


