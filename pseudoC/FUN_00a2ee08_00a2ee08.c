// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00a2ee08
// Entry Point: 00a2ee08
// Size: 772 bytes
// Signature: undefined FUN_00a2ee08(void)


uint FUN_00a2ee08(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                 SortForRendering *param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  uVar5 = std::__ndk1::
          __sort4<RenderQueueItemSortKey::SortForRendering<false,true>&,RenderQueueItemSortKey*>
                    ((RenderQueueItemSortKey *)param_1,(RenderQueueItemSortKey *)param_2,
                     (RenderQueueItemSortKey *)param_3,(RenderQueueItemSortKey *)param_4,param_6);
  uVar1 = *(uint *)((long)param_5 + 0x24) >> 0x1e & 1;
  uVar2 = *(uint *)((long)param_4 + 0x24) >> 0x1e & 1;
  bVar4 = uVar2 <= uVar1;
  uVar6 = uVar5;
  if ((((uVar1 == uVar2) && (bVar4 = param_4[1] <= param_5[1], param_5[1] == param_4[1])) &&
      (bVar4 = *param_4 <= *param_5, *param_5 == *param_4)) &&
     (((bVar4 = param_4[2] <= param_5[2], param_5[2] == param_4[2] &&
       (bVar4 = param_4[3] <= param_5[3], param_5[3] == param_4[3])) &&
      (uVar1 = *(uint *)((long)param_5 + 0x24) >> 0x1f,
      uVar2 = -((int)*(uint *)((long)param_4 + 0x24) >> 0x1f), bVar4 = uVar2 <= uVar1,
      uVar1 == uVar2)))) {
    if (*(float *)(param_4 + 4) <= *(float *)(param_5 + 4)) goto LAB_00a2f0dc;
  }
  else if (bVar4) goto LAB_00a2f0dc;
  uVar11 = *param_5;
  uVar10 = param_5[3];
  uVar9 = param_5[2];
  uVar13 = param_4[1];
  uVar12 = *param_4;
  uVar15 = param_4[3];
  uVar14 = param_4[2];
  uVar8 = param_5[4];
  param_4[1] = param_5[1];
  *param_4 = uVar11;
  param_4[3] = uVar10;
  param_4[2] = uVar9;
  uVar9 = param_4[4];
  param_4[4] = uVar8;
  uVar6 = uVar5 + 1;
  param_5[4] = uVar9;
  param_5[1] = uVar13;
  *param_5 = uVar12;
  param_5[3] = uVar15;
  param_5[2] = uVar14;
  uVar1 = *(uint *)((long)param_4 + 0x24) >> 0x1e & 1;
  uVar2 = *(uint *)((long)param_3 + 0x24) >> 0x1e & 1;
  bVar4 = uVar2 <= uVar1;
  if (((uVar1 == uVar2) && (bVar4 = param_3[1] <= param_4[1], param_4[1] == param_3[1])) &&
     ((bVar4 = *param_3 <= *param_4, *param_4 == *param_3 &&
      (((bVar4 = param_3[2] <= param_4[2], param_4[2] == param_3[2] &&
        (bVar4 = param_3[3] <= param_4[3], param_4[3] == param_3[3])) &&
       (uVar1 = *(uint *)((long)param_4 + 0x24) >> 0x1f,
       uVar2 = -((int)*(uint *)((long)param_3 + 0x24) >> 0x1f), bVar4 = uVar2 <= uVar1,
       uVar1 == uVar2)))))) {
    if (*(float *)(param_3 + 4) <= *(float *)(param_4 + 4)) goto LAB_00a2f0dc;
  }
  else if (bVar4) goto LAB_00a2f0dc;
  uVar11 = *param_4;
  uVar10 = param_4[3];
  uVar9 = param_4[2];
  uVar13 = param_3[1];
  uVar12 = *param_3;
  uVar15 = param_3[3];
  uVar14 = param_3[2];
  uVar8 = param_4[4];
  param_3[1] = param_4[1];
  *param_3 = uVar11;
  param_3[3] = uVar10;
  param_3[2] = uVar9;
  uVar9 = param_3[4];
  param_3[4] = uVar8;
  uVar6 = uVar5 + 2;
  param_4[4] = uVar9;
  param_4[1] = uVar13;
  *param_4 = uVar12;
  param_4[3] = uVar15;
  param_4[2] = uVar14;
  uVar1 = *(uint *)((long)param_3 + 0x24) >> 0x1e & 1;
  uVar2 = *(uint *)((long)param_2 + 0x24) >> 0x1e & 1;
  bVar4 = uVar2 <= uVar1;
  if (((uVar1 == uVar2) && (bVar4 = param_2[1] <= param_3[1], param_3[1] == param_2[1])) &&
     (((bVar4 = *param_2 <= *param_3, *param_3 == *param_2 &&
       ((bVar4 = param_2[2] <= param_3[2], param_3[2] == param_2[2] &&
        (bVar4 = param_2[3] <= param_3[3], param_3[3] == param_2[3])))) &&
      (uVar1 = *(uint *)((long)param_3 + 0x24) >> 0x1f,
      uVar2 = -((int)*(uint *)((long)param_2 + 0x24) >> 0x1f), bVar4 = uVar2 <= uVar1,
      uVar1 == uVar2)))) {
    if (*(float *)(param_2 + 4) <= *(float *)(param_3 + 4)) goto LAB_00a2f0dc;
  }
  else if (bVar4) goto LAB_00a2f0dc;
  uVar11 = *param_3;
  uVar10 = param_3[3];
  uVar9 = param_3[2];
  uVar13 = param_2[1];
  uVar12 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  uVar8 = param_3[4];
  param_2[1] = param_3[1];
  *param_2 = uVar11;
  param_2[3] = uVar10;
  param_2[2] = uVar9;
  uVar9 = param_2[4];
  param_2[4] = uVar8;
  param_3[4] = uVar9;
  param_3[1] = uVar13;
  *param_3 = uVar12;
  param_3[3] = uVar15;
  param_3[2] = uVar14;
  uVar1 = *(uint *)((long)param_2 + 0x24) >> 0x1e & 1;
  uVar2 = *(uint *)((long)param_1 + 0x24) >> 0x1e & 1;
  bVar4 = uVar2 <= uVar1;
  uVar6 = uVar5 + 3;
  if (((((uVar1 == uVar2) && (bVar4 = param_1[1] <= param_2[1], param_2[1] == param_1[1])) &&
       (bVar4 = *param_1 <= *param_2, *param_2 == *param_1)) &&
      ((bVar4 = param_1[2] <= param_2[2], param_2[2] == param_1[2] &&
       (bVar4 = param_1[3] <= param_2[3], param_2[3] == param_1[3])))) &&
     (uVar1 = *(uint *)((long)param_2 + 0x24) >> 0x1f,
     uVar2 = -((int)*(uint *)((long)param_1 + 0x24) >> 0x1f), bVar4 = uVar2 <= uVar1, uVar1 == uVar2
     )) {
    if (*(float *)(param_1 + 4) <= *(float *)(param_2 + 4)) goto LAB_00a2f0dc;
  }
  else if (bVar4) goto LAB_00a2f0dc;
  uVar11 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  uVar13 = param_1[1];
  uVar12 = *param_1;
  uVar15 = param_1[3];
  uVar14 = param_1[2];
  uVar8 = param_2[4];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  uVar9 = param_1[4];
  param_1[4] = uVar8;
  param_2[4] = uVar9;
  param_2[1] = uVar13;
  *param_2 = uVar12;
  param_2[3] = uVar15;
  param_2[2] = uVar14;
  uVar6 = uVar5 + 4;
LAB_00a2f0dc:
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


