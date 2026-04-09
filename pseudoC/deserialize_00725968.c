// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserialize
// Entry Point: 00725968
// Size: 892 bytes
// Signature: undefined __thiscall deserialize(DynamicAvoidance * this, File * param_1)


/* WARNING: Type propagation algorithm not settling */
/* DynamicAvoidance::deserialize(File&) */

void __thiscall DynamicAvoidance::deserialize(DynamicAvoidance *this,File *param_1)

{
  long lVar1;
  void **ppvVar2;
  void **ppvVar3;
  bool bVar4;
  int iVar5;
  undefined8 *this_00;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  OrientedBox *pOVar10;
  OrientedBox *pOVar11;
  void **ppvVar12;
  undefined local_ac [4];
  void **local_a8;
  void **local_a0;
  undefined8 local_98;
  undefined4 local_8c;
  OrientedBox *local_88;
  OrientedBox *local_80;
  undefined8 local_78;
  uint local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar5 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_6c,4);
  do {
    bVar4 = iVar5 == 4;
    if ((!bVar4) || (local_6c == 4)) goto LAB_00725cb0;
    switch(local_6c) {
    case 0:
      this_00 = (undefined8 *)operator_new(0x20);
      this_00[1] = 0;
      this_00[2] = 0;
      *this_00 = 0;
      *(undefined4 *)((long)this_00 + 0x1c) = 0;
      break;
    case 1:
      this_00 = (undefined8 *)operator_new(0x40);
      this_00[1] = 0;
      this_00[2] = 0;
      *this_00 = 0;
      *(undefined4 *)((long)this_00 + 0x1c) = 1;
      this_00[5] = 0;
      this_00[6] = 0;
      this_00[4] = 0;
      break;
    case 2:
      this_00 = (undefined8 *)operator_new(0x40);
      this_00[1] = 0;
      this_00[2] = 0;
      *this_00 = 0;
      *(undefined4 *)((long)this_00 + 0x1c) = 2;
      this_00[5] = 0;
      this_00[6] = 0;
      this_00[4] = 0;
      *(undefined *)((long)this_00 + 0x39) = 0;
      break;
    case 3:
      this_00 = (undefined8 *)operator_new(0x58);
      this_00[1] = 0;
      this_00[2] = 0;
      *this_00 = 0;
      *(undefined4 *)((long)this_00 + 0x1c) = 3;
      this_00[5] = 0;
      this_00[6] = 0;
      this_00[4] = 0;
      *(undefined *)((long)this_00 + 0x39) = 0;
      this_00[9] = 0;
      this_00[10] = 0;
      this_00[8] = 0;
      break;
    default:
      goto switchD_00725a04_caseD_4;
    }
    local_88 = (OrientedBox *)0x0;
    local_80 = (OrientedBox *)0x0;
    local_78 = 0;
                    /* try { // try from 00725ab0 to 00725aef has its CatchHandler @ 00725cf4 */
    iVar5 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_a8,4);
    if (iVar5 == 4) {
      lVar8 = (long)local_80 - (long)local_88 >> 2;
      uVar7 = (ulong)local_a8 & 0xffffffff;
      uVar9 = lVar8 * 0x6db6db6db6db6db7;
      if (uVar7 <= uVar9) {
        pOVar11 = local_80;
        if (uVar7 <= uVar9 && uVar9 - uVar7 != 0) {
          pOVar11 = local_88 + uVar7 * 0x1c;
        }
        pOVar10 = local_88;
        local_80 = pOVar11;
        if (local_88 != pOVar11) goto LAB_00725b0c;
      }
      else {
        std::__ndk1::vector<OrientedBox,std::__ndk1::allocator<OrientedBox>>::__append
                  ((vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> *)&local_88,
                   uVar7 + lVar8 * -0x6db6db6db6db6db7);
        pOVar10 = local_88;
        pOVar11 = local_80;
        if (local_88 != local_80) {
LAB_00725b0c:
          do {
                    /* try { // try from 00725b14 to 00725b23 has its CatchHandler @ 00725cf8 */
            iVar5 = (**(code **)(*(long *)param_1 + 0x28))(param_1,pOVar10,0x1c);
            if (iVar5 != 0x1c) {
              if (pOVar10 != pOVar11) goto LAB_00725bd8;
              break;
            }
            pOVar10 = pOVar10 + 0x1c;
          } while (pOVar10 != pOVar11);
        }
      }
                    /* try { // try from 00725b40 to 00725b63 has its CatchHandler @ 00725cf4 */
      iVar5 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_8c,4);
      if (iVar5 != 4) goto LAB_00725bd8;
      std::__ndk1::vector<OrientedBox,std::__ndk1::allocator<OrientedBox>>::assign<OrientedBox*>
                ((vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> *)this_00,local_88,
                 local_80);
      *(undefined4 *)(this_00 + 3) = local_8c;
      if (local_6c == 0) {
        bVar4 = true;
      }
      else {
        local_a8 = (void **)0x0;
        local_a0 = (void **)0x0;
        local_98 = 0;
                    /* try { // try from 00725b7c to 00725bb7 has its CatchHandler @ 00725ce4 */
        bVar4 = SerializationUtil::read<StoppingPath,std::__ndk1::allocator<StoppingPath>>
                          (param_1,(vector *)&local_a8);
        if ((bVar4) &&
           (iVar5 = (**(code **)(*(long *)param_1 + 0x28))(param_1,local_ac,1), iVar5 == 1)) {
          std::__ndk1::vector<StoppingPath,std::__ndk1::allocator<StoppingPath>>::
          assign<StoppingPath*>
                    ((vector<StoppingPath,std::__ndk1::allocator<StoppingPath>> *)(this_00 + 4),
                     (StoppingPath *)local_a8,(StoppingPath *)local_a0);
          bVar4 = true;
          *(undefined *)(this_00 + 7) = local_ac[0];
          ppvVar2 = local_a8;
        }
        else {
          bVar4 = false;
          ppvVar2 = local_a8;
        }
        local_a8 = ppvVar2;
        ppvVar12 = local_a0;
        if (ppvVar2 != (void **)0x0) {
          while (ppvVar3 = ppvVar12, ppvVar3 != ppvVar2) {
            ppvVar12 = ppvVar3 + -5;
            pvVar6 = *ppvVar12;
            if (pvVar6 != (void *)0x0) {
              ppvVar3[-4] = pvVar6;
              operator_delete(pvVar6);
            }
          }
          local_a0 = ppvVar2;
          operator_delete(local_a8);
        }
      }
                    /* try { // try from 00725c58 to 00725c63 has its CatchHandler @ 00725cf4 */
      addObstacle((Obstacle *)this);
    }
    else {
LAB_00725bd8:
      bVar4 = false;
    }
    if (local_88 != (OrientedBox *)0x0) {
      local_80 = local_88;
      operator_delete(local_88);
    }
    if (!bVar4) {
switchD_00725a04_caseD_4:
      bVar4 = false;
LAB_00725cb0:
      if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(bVar4);
      }
      return;
    }
    iVar5 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_6c,4);
  } while( true );
}


