// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processText
// Entry Point: 00b8f5d8
// Size: 460 bytes
// Signature: undefined __thiscall processText(Preprocessor * this, char * param_1, uint param_2, bool param_3, COMMENT_MODE param_4, basic_string * param_5, bool param_6)


/* Preprocessor::processText(char const*, unsigned int, bool, Preprocessor::COMMENT_MODE,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   bool) */

void __thiscall
Preprocessor::processText
          (Preprocessor *this,char *param_1,uint param_2,bool param_3,COMMENT_MODE param_4,
          basic_string *param_5,bool param_6)

{
  undefined4 uVar1;
  undefined uVar2;
  undefined uVar3;
  void *pvVar4;
  basic_string **ppbVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  void *pvVar10;
  long lVar11;
  
  if (param_2 == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)param_5,'\0');
    return;
  }
  lVar11 = *(long *)(this + 0x38);
  pvVar4 = operator_new(0x80);
  *(undefined8 *)((long)pvVar4 + 0x30) = 0;
  *(undefined8 *)((long)pvVar4 + 0x38) = 0;
  *(undefined8 *)((long)pvVar4 + 0x28) = 0;
  *(void **)(this + 0x38) = pvVar4;
  ppbVar5 = (basic_string **)operator_new(0x30);
  *ppbVar5 = param_5;
  ppbVar5[1] = (basic_string *)0x0;
  ppbVar5[3] = (basic_string *)0x0;
  ppbVar5[4] = (basic_string *)0x0;
  *(basic_string ***)((long)pvVar4 + 0x78) = ppbVar5;
  ppbVar5[2] = (basic_string *)0x0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(ppbVar5 + 2));
  lVar6 = *(long *)(this + 0x38);
  lVar9 = *(long *)(lVar6 + 0x78);
  *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(lVar11 + 0x58);
  uVar8 = *(undefined8 *)(lVar11 + 0x60);
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined4 *)(lVar9 + 0x28) = 1;
  *(undefined *)(lVar9 + 0x2c) = 0;
  *(bool *)(lVar9 + 0x2d) = param_6;
  *(undefined *)(lVar9 + 0x2e) = 1;
  *(undefined8 *)(lVar6 + 0x60) = uVar8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(lVar6 + 0x28));
  lVar6 = *(long *)(this + 0x38);
  uVar1 = *(undefined4 *)(lVar11 + 0x44);
  *(uint *)(lVar6 + 0x14) = param_2;
  *(uint *)(lVar6 + 0x18) = param_2 + 1;
  *(undefined4 *)(lVar6 + 0x40) = 1;
  *(undefined4 *)(lVar6 + 0x44) = uVar1;
  *(bool *)(lVar6 + 0x1c) = param_3;
  pvVar4 = operator_new__((ulong)(param_2 + 1));
  *(void **)(lVar6 + 8) = pvVar4;
  memcpy(pvVar4,param_1,(ulong)param_2);
  *(undefined *)(*(long *)(lVar6 + 8) + (ulong)param_2) = 0;
  puVar7 = *(undefined8 **)(this + 0x38);
  uVar1 = *(undefined4 *)(lVar11 + 0x68);
  uVar8 = *(undefined8 *)(lVar11 + 0x70);
  uVar2 = *(undefined *)(lVar11 + 0x4d);
  *(COMMENT_MODE *)(puVar7 + 10) = param_4;
  *(undefined4 *)(puVar7 + 0xd) = uVar1;
  uVar3 = *(undefined *)(lVar11 + 0x54);
  puVar7[0xe] = uVar8;
  *(undefined *)((long)puVar7 + 0x4d) = uVar2;
  *(undefined *)((long)puVar7 + 0x4c) = 0;
  *(undefined *)((long)puVar7 + 0x54) = uVar3;
  *puVar7 = puVar7[1];
  *(undefined4 *)(puVar7 + 9) = 0;
  processContext();
  pvVar4 = *(void **)(this + 0x38);
  if (*(void **)((long)pvVar4 + 8) != (void *)0x0) {
    operator_delete__(*(void **)((long)pvVar4 + 8));
    pvVar4 = *(void **)(this + 0x38);
  }
  pvVar10 = *(void **)((long)pvVar4 + 0x78);
  if (pvVar10 != (void *)0x0) {
    if ((*(byte *)((long)pvVar10 + 0x10) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar10 + 0x20));
    }
    operator_delete(pvVar10);
    pvVar4 = *(void **)(this + 0x38);
    if (pvVar4 == (void *)0x0) goto LAB_00b8f760;
  }
  if ((*(byte *)((long)pvVar4 + 0x28) & 1) != 0) {
    operator_delete(*(void **)((long)pvVar4 + 0x38));
  }
  operator_delete(pvVar4);
LAB_00b8f760:
  *(long *)(this + 0x38) = lVar11;
  return;
}


