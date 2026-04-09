// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push
// Entry Point: 00b6a1e8
// Size: 280 bytes
// Signature: undefined __thiscall push(PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>> * this, pair * param_1, ushort * param_2)


/* PriorityQueue<std::__ndk1::pair<float, unsigned int>, unsigned short,
   std::__ndk1::less<std::__ndk1::pair<float, unsigned int> >,
   std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float, unsigned int>, unsigned short*>,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float, unsigned int>, unsigned short*>
   > > >::push(std::__ndk1::pair<float, unsigned int> const&, unsigned short*) */

void __thiscall
PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
::push(PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
       *this,pair *param_1,ushort *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  undefined2 *puVar11;
  float fVar12;
  ushort *local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  uVar4 = (uint)(*(int *)(this + 8) - *(int *)this) >> 4 & 0xffff;
  local_50 = param_2;
  if (uVar4 != 0xffff) {
    std::__ndk1::
    vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>
    ::emplace_back<std::__ndk1::pair<float,unsigned_int>const&,unsigned_short*&>
              ((vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>
                *)this,param_1,&local_50);
    fVar2 = (float)*param_1;
    fVar3 = (float)param_1[1];
    lVar7 = *(long *)this;
    if (uVar4 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (ulong)uVar4;
      do {
        uVar5 = (int)uVar8 + 0x1ffffU >> 1 & 0xffff;
        uVar9 = (ulong)uVar5;
        fVar12 = *(float *)(lVar7 + uVar9 * 0x10);
        if (fVar12 == fVar2 || fVar12 < fVar2) {
          if ((fVar12 < fVar2) ||
             (fVar10 = *(float *)(lVar7 + uVar9 * 0x10 + 4), (uint)fVar10 <= (uint)fVar3)) break;
        }
        else {
          fVar10 = *(float *)(lVar7 + uVar9 * 0x10 + 4);
        }
        pfVar1 = (float *)(lVar7 + uVar8 * 0x10);
        puVar11 = *(undefined2 **)(lVar7 + uVar9 * 0x10 + 8);
        *pfVar1 = fVar12;
        pfVar1[1] = fVar10;
        *puVar11 = (short)uVar8;
        *(undefined2 **)(pfVar1 + 2) = puVar11;
        uVar8 = uVar9;
      } while (uVar5 != 0);
    }
    pfVar1 = (float *)(lVar7 + uVar8 * 0x10);
    *pfVar1 = fVar2;
    pfVar1[1] = fVar3;
    *(ushort **)(pfVar1 + 2) = local_50;
    *local_50 = (ushort)uVar8;
  }
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4 != 0xffff);
  }
  return;
}


