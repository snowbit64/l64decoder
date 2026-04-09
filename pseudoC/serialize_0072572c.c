// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 0072572c
// Size: 572 bytes
// Signature: undefined __thiscall serialize(DynamicAvoidance * this, File * param_1, Obstacle * param_2)


/* DynamicAvoidance::serialize(File&, Obstacle const*) const */

void __thiscall DynamicAvoidance::serialize(DynamicAvoidance *this,File *param_1,Obstacle *param_2)

{
  long **pplVar1;
  long **pplVar2;
  long lVar3;
  StoppingPath *pSVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  StoppingPath *this_00;
  long *plVar10;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pplVar1 = *(long ***)(this + 8);
  pplVar2 = *(long ***)(this + 0x10);
  do {
    if (pplVar1 == pplVar2) {
      local_6c = 4;
      iVar7 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_6c,4);
      bVar6 = iVar7 == 4;
LAB_00725934:
      if (*(long *)(lVar5 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar6);
    }
    if (*pplVar1 != (long *)param_2) {
      local_70 = *(undefined4 *)((long)*pplVar1 + 0x1c);
      iVar7 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_70,4);
      if (iVar7 == 4) {
        plVar10 = *pplVar1;
        local_6c = (int)((ulong)(plVar10[1] - *plVar10) >> 2) * -0x49249249;
        iVar7 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_6c,4);
        if (iVar7 == 4) {
          lVar9 = *plVar10;
          lVar3 = plVar10[1];
          if (lVar9 == lVar3) {
LAB_00725864:
            if (lVar9 != lVar3) goto LAB_00725930;
          }
          else {
            do {
              iVar7 = (**(code **)(*(long *)param_1 + 0x30))(param_1,lVar9,0x1c);
              if (iVar7 != 0x1c) goto LAB_00725864;
              lVar9 = lVar9 + 0x1c;
            } while (lVar9 != lVar3);
          }
          local_74 = *(undefined4 *)(*pplVar1 + 3);
          iVar7 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_74,4);
          if (iVar7 == 4) {
            plVar10 = *pplVar1;
            if (*(int *)((long)plVar10 + 0x1c) == 0) goto LAB_007257b0;
            local_6c = (int)((ulong)(plVar10[5] - plVar10[4]) >> 3) * -0x33333333;
            iVar7 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_6c,4);
            if (iVar7 == 4) {
              this_00 = (StoppingPath *)plVar10[4];
              pSVar4 = (StoppingPath *)plVar10[5];
              if (this_00 == pSVar4) {
LAB_00725780:
                if (this_00 != pSVar4) goto LAB_00725930;
              }
              else {
                do {
                  uVar8 = StoppingPath::serialize(this_00,param_1);
                  if ((uVar8 & 1) == 0) goto LAB_00725780;
                  this_00 = this_00 + 0x28;
                } while (this_00 != pSVar4);
              }
              local_6c = CONCAT31(local_6c._1_3_,*(undefined *)(plVar10 + 7));
              iVar7 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_6c,1);
              if (iVar7 == 1) goto LAB_007257b0;
            }
          }
        }
      }
LAB_00725930:
      bVar6 = false;
      goto LAB_00725934;
    }
LAB_007257b0:
    pplVar1 = pplVar1 + 4;
  } while( true );
}


