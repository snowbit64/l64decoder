// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateKey
// Entry Point: 007455b0
// Size: 424 bytes
// Signature: undefined __thiscall updateKey(PriorityQueue<Candidate,unsigned_int,std::__ndk1::less<Candidate>,std::__ndk1::vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>> * this, uint param_1, Candidate * param_2)


/* PriorityQueue<Candidate, unsigned int, std::__ndk1::less<Candidate>,
   std::__ndk1::vector<std::__ndk1::pair<Candidate, unsigned int*>,
   std::__ndk1::allocator<std::__ndk1::pair<Candidate, unsigned int*> > > >::updateKey(unsigned int,
   Candidate const&) */

void __thiscall
PriorityQueue<Candidate,unsigned_int,std::__ndk1::less<Candidate>,std::__ndk1::vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>>
::updateKey(PriorityQueue<Candidate,unsigned_int,std::__ndk1::less<Candidate>,std::__ndk1::vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>>
            *this,uint param_1,Candidate *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  uint *puVar14;
  uint *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  uVar7 = (ulong)param_1;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar6 = *(long *)this;
  if (*(ushort *)(lVar6 + uVar7 * 0x10) < *(ushort *)param_2) {
    puVar14 = *(uint **)(lVar6 + uVar7 * 0x10 + 8);
    remove(this,param_1);
    uVar7 = (ulong)(*(long *)(this + 8) - *(long *)this) >> 4;
    iVar13 = (int)uVar7;
    local_50 = puVar14;
    if (iVar13 != -1) {
      std::__ndk1::
      vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>
      ::emplace_back<Candidate_const&,unsigned_int*&>
                ((vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>
                  *)this,param_2,&local_50);
      uVar8 = *(undefined8 *)param_2;
      lVar6 = *(long *)this;
      if (iVar13 == 0) {
        uVar10 = 0;
      }
      else {
        do {
          uVar3 = (int)uVar7 - 1;
          uVar10 = (ulong)(uVar3 >> 1);
          puVar1 = (undefined8 *)(lVar6 + uVar10 * 0x10);
          if (*(ushort *)puVar1 <= (ushort)uVar8) {
            uVar10 = uVar7 & 0xffffffff;
            break;
          }
          lVar11 = (uVar7 & 0xffffffff) * 0x10;
          puVar2 = (undefined8 *)(lVar6 + lVar11);
          uVar12 = *(undefined8 *)(lVar6 + uVar10 * 0x10 + 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar12;
          lVar6 = *(long *)this;
          **(int **)(lVar6 + lVar11 + 8) = (int)uVar7;
          uVar7 = uVar10;
        } while (1 < uVar3);
      }
      puVar1 = (undefined8 *)(lVar6 + uVar10 * 0x10);
      *puVar1 = uVar8;
      puVar1[1] = local_50;
      *local_50 = (uint)uVar10;
    }
  }
  else {
    uVar8 = *(undefined8 *)param_2;
    puVar9 = *(undefined4 **)(lVar6 + uVar7 * 0x10 + 8);
    if (param_1 == 0) {
      uVar7 = 0;
    }
    else {
      do {
        uVar4 = param_1 - 1;
        uVar3 = uVar4 >> 1;
        uVar7 = (ulong)uVar3;
        puVar1 = (undefined8 *)(lVar6 + uVar7 * 0x10);
        if (*(ushort *)puVar1 <= (ushort)uVar8) {
          uVar7 = (ulong)param_1;
          break;
        }
        puVar2 = (undefined8 *)(lVar6 + (ulong)param_1 * 0x10);
        uVar12 = *(undefined8 *)(lVar6 + uVar7 * 0x10 + 8);
        *puVar2 = *puVar1;
        puVar2[1] = uVar12;
        lVar6 = *(long *)this;
        **(uint **)(lVar6 + (ulong)param_1 * 0x10 + 8) = param_1;
        param_1 = uVar3;
      } while (1 < uVar4);
    }
    puVar1 = (undefined8 *)(lVar6 + uVar7 * 0x10);
    *puVar1 = uVar8;
    puVar1[1] = puVar9;
    *puVar9 = (int)uVar7;
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


