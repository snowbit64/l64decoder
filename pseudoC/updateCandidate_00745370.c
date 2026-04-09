// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateCandidate
// Entry Point: 00745370
// Size: 576 bytes
// Signature: undefined __thiscall updateCandidate(VehicleNavigationPlanner * this, VehicleNavigationAgent * param_1, NodeId param_2, FixedPoint16 param_3)


/* VehicleNavigationPlanner::updateCandidate(VehicleNavigationAgent&, NodeId, FixedPoint16) */

void __thiscall
VehicleNavigationPlanner::updateCandidate
          (VehicleNavigationPlanner *this,NodeId param_2,undefined8 param_3,uint param_4)

{
  uint *puVar1;
  long *this_00;
  undefined8 *puVar2;
  void *__src;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  uint uVar6;
  void *__dest;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  int iVar14;
  undefined8 uVar15;
  undefined2 local_70;
  undefined4 uStack_6e;
  undefined2 uStack_6a;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar5 = VehicleNavigationAgent::computeEstimatedCostToStart(param_2);
  uVar6 = (param_4 & 0xffff) + (uint)uVar5;
  if (0xfffe < uVar6) {
    uVar6 = 0xffff;
  }
  uStack_6e = (undefined4)param_3;
  uStack_6a = (undefined2)((ulong)param_3 >> 0x20);
  local_70 = (undefined2)uVar6;
  uVar6 = VehicleNavigationAgent::getGridWidth();
  this_00 = (long *)(this + 0x98);
  puVar1 = (uint *)(*(long *)(this + 0xb0) +
                   (ulong)(((uint)((ulong)param_3 >> 0x20) & 0xffff) +
                          (((uint)((ulong)param_3 >> 0x10) & 0xffff) * (uVar6 & 0xffff) +
                          (uint)(ushort)param_3) * 8) * 4);
  if (*puVar1 == 0xffffffff) {
    __src = *(void **)(this + 0x98);
    puVar3 = *(undefined8 **)(this + 0xa0);
    uVar13 = (long)puVar3 - (long)__src;
    iVar14 = (int)(uVar13 >> 4);
    if (iVar14 != -1) {
      if (puVar3 < *(undefined8 **)(this + 0xa8)) {
        *puVar3 = CONCAT26(uStack_6a,CONCAT42(uStack_6e,local_70));
        puVar3[1] = puVar1;
        uVar15 = CONCAT26(uStack_6a,CONCAT42(uStack_6e,local_70));
        *(undefined8 **)(this + 0xa0) = puVar3 + 2;
      }
      else {
        uVar9 = ((long)uVar13 >> 4) + 1;
        if (uVar9 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar8 = (long)*(undefined8 **)(this + 0xa8) - (long)__src;
        uVar10 = (long)uVar8 >> 3;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
        if (0x7fffffffffffffef < uVar8) {
          uVar9 = 0xfffffffffffffff;
        }
        if (uVar9 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar9 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          __dest = operator_new(uVar9 << 4);
        }
        puVar3 = (undefined8 *)((long)__dest + ((long)uVar13 >> 4) * 0x10);
        uVar15 = CONCAT26(uStack_6a,CONCAT42(uStack_6e,local_70));
        *puVar3 = uVar15;
        puVar3[1] = puVar1;
        if (0 < (long)uVar13) {
          memcpy(__dest,__src,uVar13);
        }
        *(void **)(this + 0x98) = __dest;
        *(undefined8 **)(this + 0xa0) = puVar3 + 2;
        *(void **)(this + 0xa8) = (void *)((long)__dest + uVar9 * 0x10);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      lVar7 = *this_00;
      uVar13 = uVar13 >> 4;
      if (iVar14 == 0) {
        uVar9 = 0;
      }
      else {
        do {
          uVar6 = (int)uVar13 - 1;
          uVar9 = (ulong)(uVar6 >> 1);
          puVar3 = (undefined8 *)(lVar7 + uVar9 * 0x10);
          if (*(ushort *)puVar3 <= (ushort)uVar15) {
            uVar9 = uVar13 & 0xffffffff;
            break;
          }
          lVar11 = (uVar13 & 0xffffffff) * 0x10;
          puVar2 = (undefined8 *)(lVar7 + lVar11);
          uVar12 = *(undefined8 *)(lVar7 + uVar9 * 0x10 + 8);
          *puVar2 = *puVar3;
          puVar2[1] = uVar12;
          lVar7 = *this_00;
          **(int **)(lVar7 + lVar11 + 8) = (int)uVar13;
          uVar13 = uVar9;
        } while (1 < uVar6);
      }
      puVar3 = (undefined8 *)(lVar7 + uVar9 * 0x10);
      *puVar3 = uVar15;
      puVar3[1] = puVar1;
      *puVar1 = (uint)uVar9;
    }
  }
  else {
    PriorityQueue<Candidate,unsigned_int,std::__ndk1::less<Candidate>,std::__ndk1::vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>>
    ::updateKey((PriorityQueue<Candidate,unsigned_int,std::__ndk1::less<Candidate>,std::__ndk1::vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>>
                 *)this_00,*puVar1,(Candidate *)&local_70);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


