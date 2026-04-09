// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processTextToCurrentOutput
// Entry Point: 00b920fc
// Size: 460 bytes
// Signature: undefined __cdecl processTextToCurrentOutput(char * param_1, uint param_2, char * param_3)


/* Preprocessor::processTextToCurrentOutput(char const*, unsigned int, char const*) */

void Preprocessor::processTextToCurrentOutput(char *param_1,uint param_2,char *param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined uVar4;
  void *pvVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  char **ppcVar10;
  long lVar11;
  long lVar12;
  
  iVar6 = (int)param_3;
  if (iVar6 == 0) {
    return;
  }
  lVar12 = *(long *)(param_1 + 0x38);
  pvVar5 = operator_new(0x80);
  *(undefined8 *)((long)pvVar5 + 0x30) = 0;
  *(undefined8 *)((long)pvVar5 + 0x38) = 0;
  *(undefined8 *)((long)pvVar5 + 0x20) = 0;
  *(void **)(param_1 + 0x38) = pvVar5;
  *(undefined8 *)((long)pvVar5 + 0x28) = 0;
  uVar2 = *(undefined4 *)(lVar12 + 0x58);
  uVar8 = *(undefined8 *)(lVar12 + 0x60);
  *(undefined8 *)((long)pvVar5 + 0x78) = *(undefined8 *)(lVar12 + 0x78);
  *(undefined4 *)((long)pvVar5 + 0x58) = uVar2;
  *(undefined8 *)((long)pvVar5 + 0x60) = uVar8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(undefined8 *)((long)pvVar5 + 0x28));
  lVar11 = *(long *)(param_1 + 0x38);
  *(int *)(lVar11 + 0x14) = iVar6;
  *(uint *)(lVar11 + 0x18) = iVar6 + 1U;
  *(undefined8 *)(lVar11 + 0x40) = 0x100000001;
  *(undefined *)(lVar11 + 0x1c) = 1;
  pvVar5 = operator_new__((ulong)(iVar6 + 1U));
  *(void **)(lVar11 + 8) = pvVar5;
  memcpy(pvVar5,(void *)(ulong)param_2,(ulong)param_3 & 0xffffffff);
  *(undefined *)(*(long *)(lVar11 + 8) + ((ulong)param_3 & 0xffffffff)) = 0;
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(lVar12 + 0x68);
  uVar4 = *(undefined *)(lVar12 + 0x4d);
  uVar3 = *(undefined4 *)(lVar12 + 0x50);
  *(undefined *)((long)puVar7 + 0x4c) = 0;
  *(undefined4 *)(puVar7 + 0xd) = uVar2;
  *(undefined *)((long)puVar7 + 0x4d) = uVar4;
  uVar8 = *(undefined8 *)(lVar12 + 0x70);
  *(undefined4 *)(puVar7 + 10) = uVar3;
  *puVar7 = puVar7[1];
  puVar7[0xe] = uVar8;
  uVar4 = *(undefined *)(lVar12 + 0x54);
  pcVar1 = (char *)((long)puVar7 + 0x29);
  if ((*(byte *)(puVar7 + 5) & 1) != 0) {
    pcVar1 = (char *)puVar7[7];
  }
  *(undefined4 *)(puVar7 + 9) = 0;
  *(undefined *)((long)puVar7 + 0x54) = uVar4;
  OutputContext::setLine((OutputContext *)puVar7[0xf],pcVar1,*(uint *)(puVar7 + 8),0xffffffff);
  plVar9 = *(long **)(param_1 + 0x38);
  if (*plVar9 != 0) {
    while ((byte)(*(byte *)((long)plVar9 + 0x4c) | param_1[0x131]) == 0) {
      parseText();
      plVar9 = *(long **)(param_1 + 0x38);
    }
    if (param_1[0x131] != 0) {
      ppcVar10 = (char **)plVar9[0xf];
      if (*ppcVar10 != (char *)0x0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(*ppcVar10,0x4e63ec);
      }
      plVar9 = (long *)ppcVar10[1];
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x30))(plVar9,"Preprocessor failed, check log",0x1e);
      }
      plVar9 = *(long **)(param_1 + 0x38);
      *(undefined *)((long)ppcVar10 + 0x2e) = 0;
    }
  }
  if ((void *)plVar9[1] != (void *)0x0) {
    operator_delete__((void *)plVar9[1]);
    plVar9 = *(long **)(param_1 + 0x38);
    if (plVar9 == (long *)0x0) goto LAB_00b922b0;
  }
  if ((*(byte *)(plVar9 + 5) & 1) != 0) {
    operator_delete((void *)plVar9[7]);
  }
  operator_delete(plVar9);
LAB_00b922b0:
  *(long *)(param_1 + 0x38) = lVar12;
  return;
}


