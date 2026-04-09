// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser_restart
// Entry Point: 00c2147c
// Size: 380 bytes
// Signature: undefined __cdecl gsParser_restart(__sFILE * param_1, void * param_2)


/* gsParser_restart(__sFILE*, void*) */

void gsParser_restart(__sFILE *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  __sFILE **pp_Var11;
  
  if ((*(long *)((long)param_2 + 0x28) == 0) ||
     (pp_Var11 = *(__sFILE ***)
                  (*(long *)((long)param_2 + 0x28) + *(long *)((long)param_2 + 0x18) * 8),
     pp_Var11 == (__sFILE **)0x0)) {
    FUN_00c209fc(param_2);
    uVar4 = gsParser__create_buffer(*(__sFILE **)((long)param_2 + 8),0x4000,param_2);
    lVar6 = *(long *)((long)param_2 + 0x18) * 8;
    *(undefined8 *)(*(long *)((long)param_2 + 0x28) + lVar6) = uVar4;
    pp_Var11 = *(__sFILE ***)(*(long *)((long)param_2 + 0x28) + lVar6);
  }
  puVar5 = (undefined4 *)__errno();
  uVar1 = *puVar5;
  *(undefined4 *)((long)pp_Var11 + 0x1c) = 0;
  *pp_Var11[1] = (__sFILE)0x0;
  pp_Var11[1][1] = (__sFILE)0x0;
  *(undefined4 *)(pp_Var11 + 5) = 1;
  lVar6 = *(long *)((long)param_2 + 0x28);
  *(undefined4 *)(pp_Var11 + 7) = 0;
  pp_Var11[2] = pp_Var11[1];
  if (lVar6 == 0) {
    *pp_Var11 = param_1;
    *(undefined4 *)((long)pp_Var11 + 0x34) = 1;
    if (pp_Var11 == (__sFILE **)0x0) goto LAB_00c215ac;
  }
  else {
    if (*(__sFILE ***)(lVar6 + *(long *)((long)param_2 + 0x18) * 8) == pp_Var11) {
      lVar8 = *(long *)((long)param_2 + 0x18);
      lVar9 = *(long *)(lVar6 + lVar8 * 8);
      puVar10 = *(undefined **)(lVar9 + 0x10);
      uVar2 = *(undefined4 *)(lVar9 + 0x1c);
      *(undefined **)((long)param_2 + 0x40) = puVar10;
      *(undefined **)((long)param_2 + 0x80) = puVar10;
      puVar7 = *(undefined8 **)(lVar6 + lVar8 * 8);
      *(undefined4 *)((long)param_2 + 0x34) = uVar2;
      *(undefined8 *)((long)param_2 + 8) = *puVar7;
      uVar3 = *puVar10;
      *pp_Var11 = param_1;
      *(undefined4 *)((long)pp_Var11 + 0x34) = 1;
      *(undefined *)((long)param_2 + 0x30) = uVar3;
    }
    else {
      lVar8 = *(long *)((long)param_2 + 0x18);
      *pp_Var11 = param_1;
      *(undefined4 *)((long)pp_Var11 + 0x34) = 1;
    }
    if (*(__sFILE ***)(lVar6 + lVar8 * 8) == pp_Var11) goto LAB_00c215ac;
  }
  *(undefined8 *)((long)pp_Var11 + 0x2c) = 1;
LAB_00c215ac:
  lVar8 = *(long *)((long)param_2 + 0x18);
  *(undefined4 *)((long)pp_Var11 + 0x24) = 0;
  *puVar5 = uVar1;
  lVar8 = lVar8 * 8;
  lVar9 = *(long *)(lVar6 + lVar8);
  puVar10 = *(undefined **)(lVar9 + 0x10);
  uVar1 = *(undefined4 *)(lVar9 + 0x1c);
  *(undefined **)((long)param_2 + 0x40) = puVar10;
  *(undefined **)((long)param_2 + 0x80) = puVar10;
  puVar7 = *(undefined8 **)(lVar6 + lVar8);
  *(undefined4 *)((long)param_2 + 0x34) = uVar1;
  *(undefined8 *)((long)param_2 + 8) = *puVar7;
  *(undefined *)((long)param_2 + 0x30) = *puVar10;
  return;
}


