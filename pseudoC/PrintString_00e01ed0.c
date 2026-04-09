// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PrintString
// Entry Point: 00e01ed0
// Size: 516 bytes
// Signature: undefined __thiscall PrintString(XMLPrinter * this, char * param_1, bool param_2)


/* tinyxml2::XMLPrinter::PrintString(char const*, bool) */

void __thiscall tinyxml2::XMLPrinter::PrintString(XMLPrinter *this,char *param_1,bool param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  size_t __n;
  ulong uVar6;
  byte *__ptr;
  XMLPrinter *__src;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  
  if (this[0x88] == (XMLPrinter)0x0) {
    uVar6 = strlen(param_1);
LAB_00e02214:
    Write(this,param_1,uVar6);
    return;
  }
  bVar2 = *param_1;
  lVar1 = 0xca;
  if (!param_2) {
    lVar1 = 0x8a;
  }
  if (bVar2 != 0) {
    pbVar9 = (byte *)param_1;
    do {
      uVar5 = (uint)bVar2;
      if ((uVar5 < 0x40) && (this[(ulong)bVar2 + lVar1] != (XMLPrinter)0x0)) {
        if (param_1 < pbVar9) {
          do {
            while( true ) {
              __ptr = (byte *)param_1;
              __n = (long)pbVar9 - (long)__ptr;
              if (0x7ffffffe < __n) {
                __n = 0x7fffffff;
              }
              if (*(FILE **)(this + 0x78) != (FILE *)0x0) break;
              iVar7 = *(int *)(this + 0x130);
              iVar8 = iVar7 + (int)__n;
              if (*(int *)(this + 300) < iVar8) {
                iVar3 = iVar8 * 2;
                pvVar4 = operator_new__((long)iVar3);
                __src = *(XMLPrinter **)(this + 0x110);
                memcpy(pvVar4,__src,(long)iVar7);
                if ((__src != this + 0x118) && (__src != (XMLPrinter *)0x0)) {
                  operator_delete__(__src);
                  iVar7 = *(int *)(this + 0x130);
                  iVar8 = iVar7 + (int)__n;
                }
                *(int *)(this + 300) = iVar3;
                *(void **)(this + 0x110) = pvVar4;
              }
              else {
                pvVar4 = *(void **)(this + 0x110);
              }
              pvVar4 = (void *)((long)pvVar4 + (long)iVar7 + -1);
              *(int *)(this + 0x130) = iVar8;
              memcpy(pvVar4,__ptr,__n);
              *(undefined *)((long)pvVar4 + __n) = 0;
              param_1 = (char *)(__ptr + __n);
              if (pbVar9 <= __ptr + __n) goto LAB_00e02040;
            }
            fwrite(__ptr,1,__n,*(FILE **)(this + 0x78));
            param_1 = (char *)(__ptr + __n);
          } while (__ptr + __n < pbVar9);
LAB_00e02040:
          param_1 = (char *)(__ptr + __n);
          uVar5 = (uint)*pbVar9;
        }
        if (uVar5 - 0x22 < 0x1d) {
                    /* WARNING: Could not recover jumptable at 0x00e02068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&DAT_0054bee4)[uVar5 - 0x22] * 4 + 0xe01f3c))();
          return;
        }
        param_1 = (char *)((byte *)param_1 + 1);
      }
      pbVar9 = pbVar9 + 1;
      bVar2 = *pbVar9;
    } while (bVar2 != 0);
    if (param_1 < pbVar9) {
      uVar6 = (long)pbVar9 - (long)param_1;
      if (0x7ffffffe < uVar6) {
        uVar6 = 0x7fffffff;
      }
      goto LAB_00e02214;
    }
  }
  return;
}


