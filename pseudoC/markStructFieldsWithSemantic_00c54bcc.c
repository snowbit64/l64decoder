// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markStructFieldsWithSemantic
// Entry Point: 00c54bcc
// Size: 212 bytes
// Signature: undefined __thiscall markStructFieldsWithSemantic(IR_TypeSet * this, char * param_1, uint param_2)


/* IR_TypeSet::markStructFieldsWithSemantic(char const*, unsigned int) */

void __thiscall
IR_TypeSet::markStructFieldsWithSemantic(IR_TypeSet *this,char *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  
  lVar5 = *(long *)(this + 0xda0);
  lVar1 = *(long *)(this + 0xda8) - lVar5;
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      lVar3 = *(long *)(*(long *)(lVar5 + uVar6 * 0x10) + 8);
      if (*(char *)(lVar3 + 0x52) == '\0') {
        uVar4 = (*(long *)(lVar3 + 0x38) - *(long *)(lVar3 + 0x30) >> 3) * 0xb6db6db7;
        if ((int)uVar4 != 0) {
          uVar4 = uVar4 & 0xffffffff;
          puVar7 = (uint *)(*(long *)(lVar3 + 0x30) + 0x20);
          do {
            if ((*(char **)(puVar7 + -6) != (char *)0x0) &&
               (iVar2 = strcmp(*(char **)(puVar7 + -6),param_1), iVar2 == 0)) {
              *puVar7 = *puVar7 | param_2;
            }
            puVar7 = puVar7 + 0xe;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
      }
      uVar6 = uVar6 + 1;
    } while ((uVar6 & 0xffffffff) < (ulong)(lVar1 >> 4));
  }
  return;
}


