// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: adjustDown
// Entry Point: 00b6b678
// Size: 372 bytes
// Signature: undefined __thiscall adjustDown(PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>> * this, ushort param_1)


/* PriorityQueue<std::__ndk1::pair<float, unsigned int>, unsigned short,
   std::__ndk1::less<std::__ndk1::pair<float, unsigned int> >,
   std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float, unsigned int>, unsigned short*>,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float, unsigned int>, unsigned short*>
   > > >::adjustDown(unsigned short) */

ulong __thiscall
PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
::adjustDown(PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
             *this,ushort param_1)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined2 *puVar9;
  float fVar10;
  float fVar11;
  
  lVar5 = *(long *)this;
  pfVar1 = (float *)(lVar5 + (ulong)param_1 * 0x10);
  if (param_1 < 3) {
    uVar6 = 0;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    uVar8 = 2;
    do {
      uVar8 = uVar8 & 0xffff;
      fVar11 = *(float *)(lVar5 + uVar8 * 0x10);
      fVar10 = *(float *)(lVar5 + (uVar8 - 1) * 0x10);
      if (fVar11 <= fVar10) {
        if (fVar10 <= fVar11) {
          uVar7 = (uint)(*(uint *)(lVar5 + (uVar8 - 1) * 0x10 + 4) <
                        *(uint *)(lVar5 + uVar8 * 0x10 + 4));
        }
        else {
          uVar7 = 0;
        }
      }
      else {
        uVar7 = 1;
      }
      uVar7 = (int)uVar8 - uVar7;
      uVar6 = (ulong)uVar7;
      uVar8 = uVar6 & 0xffff;
      fVar10 = *(float *)(lVar5 + uVar8 * 0x10);
      if (fVar10 < *pfVar1) {
        fVar11 = *(float *)(lVar5 + uVar8 * 0x10 + 4);
      }
      else if ((*pfVar1 < fVar10) ||
              (fVar11 = *(float *)(lVar5 + uVar8 * 0x10 + 4), (uint)pfVar1[1] <= (uint)fVar11)) {
        return uVar4;
      }
      pfVar2 = (float *)(lVar5 + (uVar4 & 0xffff) * 0x10);
      puVar9 = *(undefined2 **)(lVar5 + uVar8 * 0x10 + 8);
      uVar3 = uVar7 * 2 + 2;
      uVar8 = (ulong)uVar3;
      *pfVar2 = fVar10;
      pfVar2[1] = fVar11;
      *puVar9 = (short)uVar4;
      uVar4 = (ulong)uVar7;
      *(undefined2 **)(pfVar2 + 2) = puVar9;
    } while ((uVar3 & 0xfffe) < (uint)param_1);
    uVar4 = (ulong)(uVar7 * 2 | 1);
  }
  if ((uint)param_1 <= ((uint)uVar4 & 0xffff)) {
    return uVar6;
  }
  uVar8 = uVar4 & 0xffff;
  fVar10 = *(float *)(lVar5 + uVar8 * 0x10);
  if (*pfVar1 <= fVar10) {
    if (*pfVar1 < fVar10) {
      return uVar6;
    }
    fVar11 = *(float *)(lVar5 + uVar8 * 0x10 + 4);
    if ((uint)pfVar1[1] <= (uint)fVar11) {
      return uVar6;
    }
  }
  else {
    fVar11 = *(float *)(lVar5 + uVar8 * 0x10 + 4);
  }
  pfVar1 = (float *)(lVar5 + (uVar6 & 0xffff) * 0x10);
  puVar9 = *(undefined2 **)(lVar5 + uVar8 * 0x10 + 8);
  *pfVar1 = fVar10;
  pfVar1[1] = fVar11;
  *(undefined2 **)(pfVar1 + 2) = puVar9;
  *puVar9 = (short)uVar6;
  return uVar4;
}


