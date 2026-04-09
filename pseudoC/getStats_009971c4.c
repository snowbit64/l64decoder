// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStats
// Entry Point: 009971c4
// Size: 740 bytes
// Signature: undefined __thiscall getStats(Bt2World * this, uint * param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5, uint * param_6)


/* Bt2World::getStats(unsigned int&, unsigned int&, unsigned int&, unsigned int&, unsigned int&,
   unsigned int&) */

void __thiscall
Bt2World::getStats(Bt2World *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4,
                  uint *param_5,uint *param_6)

{
  int iVar1;
  long lVar2;
  long *****ppppplVar3;
  long ******pppppplVar4;
  long lVar5;
  long ******pppppplVar6;
  long ******pppppplVar7;
  long ******pppppplVar8;
  long lVar9;
  long ******local_98;
  long ******local_90;
  long local_88;
  long ******local_80;
  long ******local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  local_78 = (long ******)0x0;
  local_70 = 0;
  local_80 = (long ******)&local_78;
  local_90 = (long ******)0x0;
  local_88 = 0;
  local_98 = (long ******)&local_90;
  if (*(int *)(this + 0x144) < 1) {
    local_88._0_4_ = 0;
    local_70._0_4_ = 0;
  }
  else {
    lVar9 = 0;
    do {
      lVar5 = *(long *)(*(long *)(this + 0x150) + lVar9 * 8);
      if ((*(uint *)(lVar5 + 0xe0) & 3) == 0) {
        *param_1 = *param_1 + 1;
        if (*(int *)(lVar5 + 0xec) != 2 && *(int *)(lVar5 + 0xec) != 5) {
          *param_2 = *param_2 + 1;
          iVar1 = *(int *)(lVar5 + 0xe4);
          pppppplVar6 = (long ******)&local_90;
          pppppplVar8 = (long ******)&local_90;
          pppppplVar4 = local_90;
          while (pppppplVar4 != (long ******)0x0) {
            while (pppppplVar7 = pppppplVar4, pppppplVar8 = pppppplVar7,
                  iVar1 < *(int *)((long)pppppplVar7 + 0x1c)) {
              pppppplVar6 = pppppplVar7;
              pppppplVar4 = (long ******)*pppppplVar7;
              if ((long ******)*pppppplVar7 == (long ******)0x0) {
                if (*pppppplVar7 != (long *****)0x0) goto LAB_0099737c;
                goto LAB_00997328;
              }
            }
            if (iVar1 <= *(int *)((long)pppppplVar7 + 0x1c)) break;
            pppppplVar6 = pppppplVar7 + 1;
            pppppplVar4 = (long ******)*pppppplVar6;
          }
          pppppplVar7 = pppppplVar6;
          if (*pppppplVar7 == (long *****)0x0) {
LAB_00997328:
                    /* try { // try from 00997328 to 00997333 has its CatchHandler @ 009974a8 */
            ppppplVar3 = (long *****)operator_new(0x20);
            *(int *)((long)ppppplVar3 + 0x1c) = iVar1;
            *ppppplVar3 = (long ****)0x0;
            ppppplVar3[1] = (long ****)0x0;
            ppppplVar3[2] = (long ****)pppppplVar8;
            *pppppplVar7 = ppppplVar3;
            if ((long ******)*local_98 != (long ******)0x0) {
              ppppplVar3 = *pppppplVar7;
              local_98 = (long ******)*local_98;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      ((__tree_node_base *)local_90,(__tree_node_base *)ppppplVar3);
            local_88 = local_88 + 1;
          }
        }
LAB_0099737c:
        iVar1 = *(int *)(lVar5 + 0xe4);
        pppppplVar6 = (long ******)&local_78;
        pppppplVar8 = (long ******)&local_78;
        pppppplVar4 = local_78;
        while (pppppplVar4 != (long ******)0x0) {
          while (pppppplVar7 = pppppplVar4, pppppplVar8 = pppppplVar7,
                iVar1 < *(int *)((long)pppppplVar7 + 0x1c)) {
            pppppplVar6 = pppppplVar7;
            pppppplVar4 = (long ******)*pppppplVar7;
            if ((long ******)*pppppplVar7 == (long ******)0x0) {
              if (*pppppplVar7 != (long *****)0x0) goto LAB_00997264;
              goto LAB_009973d8;
            }
          }
          if (iVar1 <= *(int *)((long)pppppplVar7 + 0x1c)) break;
          pppppplVar6 = pppppplVar7 + 1;
          pppppplVar4 = (long ******)*pppppplVar6;
        }
        pppppplVar7 = pppppplVar6;
        if (*pppppplVar7 == (long *****)0x0) {
LAB_009973d8:
                    /* try { // try from 009973d8 to 009973e3 has its CatchHandler @ 009974ac */
          ppppplVar3 = (long *****)operator_new(0x20);
          *(int *)((long)ppppplVar3 + 0x1c) = iVar1;
          *ppppplVar3 = (long ****)0x0;
          ppppplVar3[1] = (long ****)0x0;
          ppppplVar3[2] = (long ****)pppppplVar8;
          *pppppplVar7 = ppppplVar3;
          if ((long ******)*local_80 != (long ******)0x0) {
            local_80 = (long ******)*local_80;
            ppppplVar3 = *pppppplVar7;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    ((__tree_node_base *)local_78,(__tree_node_base *)ppppplVar3);
          local_70 = local_70 + 1;
        }
      }
      else if ((*(uint *)(lVar5 + 0xe0) >> 1 & 1) != 0) {
        *param_3 = *param_3 + 1;
      }
LAB_00997264:
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(this + 0x144));
  }
  *param_5 = (uint)local_70;
  *param_6 = (uint)local_88;
  *param_4 = *(int *)(this + 0xc) - (*param_1 + *param_3);
  std::__ndk1::__tree<int,std::__ndk1::less<int>,std::__ndk1::allocator<int>>::destroy
            ((__tree<int,std::__ndk1::less<int>,std::__ndk1::allocator<int>> *)&local_98,
             (__tree_node *)local_90);
  std::__ndk1::__tree<int,std::__ndk1::less<int>,std::__ndk1::allocator<int>>::destroy
            ((__tree<int,std::__ndk1::less<int>,std::__ndk1::allocator<int>> *)&local_80,
             (__tree_node *)local_78);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


