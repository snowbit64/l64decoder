// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getConstantExpression
// Entry Point: 00c30c10
// Size: 1004 bytes
// Signature: undefined __thiscall getConstantExpression(IR_HllConvertUtil * this, ConversionContext * param_1, uint param_2, IR_Type * param_3)


/* IR_HllConvertUtil::getConstantExpression(IR_HllConvertUtil::ConversionContext&, unsigned int,
   IR_Type*) */

void __thiscall
IR_HllConvertUtil::getConstantExpression
          (IR_HllConvertUtil *this,ConversionContext *param_1,uint param_2,IR_Type *param_3)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  size_t __n;
  GsTBasicType GVar5;
  uint *puVar6;
  char *pcVar7;
  char *pcVar8;
  ulong *in_x8;
  byte *pbVar9;
  byte *pbVar10;
  undefined *__dest;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  byte local_1170 [16];
  void *local_1160;
  undefined auStack_1158 [4096];
  char acStack_158 [256];
  long local_58;
  
  puVar6 = (uint *)(ulong)param_2;
  lVar4 = tpidr_el0;
  uVar13 = (ulong)((uint)param_1 & 0x7fffffff);
  local_58 = *(long *)(lVar4 + 0x28);
  lVar12 = *(long *)(*(long *)(this + 8) + 0x80);
  piVar11 = (int *)(lVar12 + uVar13 * 0x18);
  if (*piVar11 == 0xe || *piVar11 == 0) {
    *(undefined *)in_x8 = 0x12;
    *(undefined2 *)((long)in_x8 + 9) = 0x24;
    *(undefined8 *)((long)in_x8 + 1) = 0x24524f5252452424;
    goto LAB_00c30f08;
  }
  if (puVar6 == (uint *)0x0) {
    GVar5 = 0;
  }
  else {
    GVar5 = puVar6[2];
    if (2 < *puVar6) {
      GVar5 = 0;
    }
  }
  IR_Const::formatHLL((IR_Const *)piVar11,acStack_158,GVar5,
                      (bool)(*(int *)(this + 0x10) - 1U < 6 &
                            (byte)(0x23 >> (ulong)(*(int *)(this + 0x10) - 1U & 0x1f))));
  if (*piVar11 < 10) {
    piVar11 = *(int **)(lVar12 + uVar13 * 0x18 + 0x10);
    if ((piVar11 != (int *)0x0) && (*piVar11 - 1U < 2)) {
      if ((*(uint *)(this + 0x10) < 7) &&
         ((1 << (ulong)(*(uint *)(this + 0x10) & 0x1f) & 0x46U) != 0)) {
        IR_Type::getTypeString((IR_LANGUAGE)piVar11);
        pvVar1 = (void *)((ulong)local_1170 | 1);
        if ((local_1170[0] & 1) != 0) {
          pvVar1 = local_1160;
        }
                    /* try { // try from 00c30d64 to 00c30d7f has its CatchHandler @ 00c31000 */
        FUN_00c2f578(auStack_1158,0x1000,"((%s)%s)",pvVar1,acStack_158);
      }
      else {
        IR_Type::getTypeString((IR_LANGUAGE)piVar11);
        pvVar1 = (void *)((ulong)local_1170 | 1);
        if ((local_1170[0] & 1) != 0) {
          pvVar1 = local_1160;
        }
                    /* try { // try from 00c30e60 to 00c30e7b has its CatchHandler @ 00c30ffc */
        FUN_00c2f578(auStack_1158,0x1000,"%s(%s)",pvVar1,acStack_158);
      }
      if ((local_1170[0] & 1) != 0) {
        operator_delete(local_1160);
      }
      __strcpy_chk(acStack_158,auStack_1158,0x100);
    }
  }
  else if (*piVar11 == 10) {
    iVar2 = **(int **)(puVar6 + 2);
    if (iVar2 == 8) {
      uVar3 = *(uint *)(this + 0x10);
      if ((uVar3 < 7) && ((1 << (ulong)(uVar3 & 0x1f) & 0x46U) != 0)) {
LAB_00c30e04:
        pcVar7 = "%s";
      }
      else {
        if (2 < uVar3 - 3) goto LAB_00c30ea0;
        if (uVar3 != 4) {
joined_r0x00c30f50:
          if (uVar3 == 5) {
            pcVar7 = "%s%s";
            pcVar8 = "";
            pbVar9 = *(byte **)(*(long *)(lVar12 + uVar13 * 0x18 + 8) + 8);
            pbVar10 = *(byte **)(pbVar9 + 0x10);
            if ((*pbVar9 & 1) == 0) {
              pbVar10 = pbVar9 + 1;
            }
            goto LAB_00c30fcc;
          }
          goto LAB_00c30e04;
        }
        pcVar7 = "g_pSRT->m_pSrtResources->m_sampler_%s";
      }
      pbVar9 = *(byte **)(*(long *)(lVar12 + uVar13 * 0x18 + 8) + 8);
      pbVar10 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar10 = pbVar9 + 1;
      }
      FUN_00c2f578(acStack_158,0x100,pcVar7,pbVar10);
    }
    else if (iVar2 == 7) {
      uVar3 = *(uint *)(this + 0x10);
      if ((uVar3 < 7) && ((1 << (ulong)(uVar3 & 0x1f) & 0x46U) != 0)) goto LAB_00c30e04;
      if (uVar3 - 3 < 3) {
        if (uVar3 != 4) goto joined_r0x00c30f50;
        pcVar8 = "texture";
        if (*(char *)(*(int **)(puVar6 + 2) + 5) != '\0') {
          pcVar8 = "rwtexture";
        }
        pcVar7 = "g_pSRT->m_pSrtResources->m_%s_%s";
        pbVar9 = *(byte **)(*(long *)(lVar12 + uVar13 * 0x18 + 8) + 8);
        pbVar10 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar10 = pbVar9 + 1;
        }
LAB_00c30fcc:
        FUN_00c2f578(acStack_158,0x100,pcVar7,pcVar8,pbVar10);
      }
    }
  }
LAB_00c30ea0:
  __n = strlen(acStack_158);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_00c30ef0;
  }
  else {
    uVar13 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar13);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar13 | 1;
LAB_00c30ef0:
    memcpy(__dest,acStack_158,__n);
  }
  __dest[__n] = 0;
LAB_00c30f08:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


