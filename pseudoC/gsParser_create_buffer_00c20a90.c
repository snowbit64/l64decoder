// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser__create_buffer
// Entry Point: 00c20a90
// Size: 268 bytes
// Signature: undefined __cdecl gsParser__create_buffer(__sFILE * param_1, int param_2, void * param_3)


/* gsParser__create_buffer(__sFILE*, int, void*) */

__sFILE ** gsParser__create_buffer(__sFILE *param_1,int param_2,void *param_3)

{
  undefined4 uVar1;
  undefined uVar2;
  __sFILE **pp_Var3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  pp_Var3 = (__sFILE **)malloc(0x40);
  if (pp_Var3 == (__sFILE **)0x0) {
LAB_00c20b90:
                    /* WARNING: Subroutine does not return */
    FUN_00c21450("out of dynamic memory in yy_create_buffer()");
  }
  *(int *)(pp_Var3 + 3) = param_2;
  puVar4 = (undefined2 *)malloc((ulong)(param_2 + 2));
  pp_Var3[1] = (__sFILE *)puVar4;
  if (puVar4 == (undefined2 *)0x0) goto LAB_00c20b90;
  *(undefined4 *)(pp_Var3 + 4) = 1;
  puVar5 = (undefined4 *)__errno();
  lVar6 = *(long *)((long)param_3 + 0x28);
  uVar1 = *puVar5;
  *(undefined4 *)((long)pp_Var3 + 0x1c) = 0;
  *puVar4 = 0;
  pp_Var3[2] = (__sFILE *)puVar4;
  *(undefined4 *)(pp_Var3 + 5) = 1;
  *(undefined4 *)(pp_Var3 + 7) = 0;
  if (lVar6 == 0) {
    *pp_Var3 = param_1;
    *(undefined4 *)((long)pp_Var3 + 0x34) = 1;
    if (pp_Var3 == (__sFILE **)0x0) goto LAB_00c20b5c;
  }
  else {
    lVar7 = *(long *)((long)param_3 + 0x18);
    if (*(__sFILE ***)(lVar6 + lVar7 * 8) == pp_Var3) {
      *(undefined2 **)((long)param_3 + 0x40) = puVar4;
      uVar2 = *(undefined *)puVar4;
      *(undefined2 **)((long)param_3 + 0x80) = puVar4;
      puVar8 = *(undefined8 **)(lVar6 + lVar7 * 8);
      *(undefined4 *)((long)param_3 + 0x34) = 0;
      *(undefined *)((long)param_3 + 0x30) = uVar2;
      *(undefined8 *)((long)param_3 + 8) = *puVar8;
    }
    *pp_Var3 = param_1;
    *(undefined4 *)((long)pp_Var3 + 0x34) = 1;
    if (*(__sFILE ***)(lVar6 + lVar7 * 8) == pp_Var3) goto LAB_00c20b5c;
  }
  *(undefined8 *)((long)pp_Var3 + 0x2c) = 1;
LAB_00c20b5c:
  *(undefined4 *)((long)pp_Var3 + 0x24) = 0;
  *puVar5 = uVar1;
  return pp_Var3;
}


