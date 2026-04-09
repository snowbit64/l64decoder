// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 008eeeb0
// Size: 348 bytes
// Signature: undefined __thiscall push_back(__split_buffer<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>>&> * this, pair * param_1)


/* std::__ndk1::__split_buffer<std::__ndk1::pair<unsigned int, BaseTerrainSyncer::SpanSetPair>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned int, BaseTerrainSyncer::SpanSetPair>
   >&>::push_back(std::__ndk1::pair<unsigned int, BaseTerrainSyncer::SpanSetPair>&&) */

void __thiscall
std::__ndk1::
__split_buffer<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>>&>
::push_back(__split_buffer<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>>&>
            *this,pair *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar9 = *(undefined8 **)(this + 0x10);
  puVar11 = puVar9;
  if (puVar9 == *(undefined8 **)(this + 0x18)) {
    puVar2 = *(undefined8 **)this;
    puVar12 = *(undefined8 **)(this + 8);
    if (puVar12 < puVar2 || (long)puVar12 - (long)puVar2 == 0) {
      uVar7 = (long)puVar9 - (long)puVar2 >> 4;
      if ((long)puVar9 - (long)puVar2 == 0) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar5 = operator_new(uVar7 * 0x20);
      puVar1 = (undefined8 *)((long)pvVar5 + (uVar7 & 0x1ffffffffffffffc) * 8);
      uVar4 = (long)puVar9 - (long)puVar12;
      puVar11 = puVar1;
      if (uVar4 != 0) {
        puVar11 = (undefined8 *)((long)puVar1 + (uVar4 & 0xffffffffffffffe0));
        lVar8 = ((long)uVar4 >> 5) << 5;
        puVar9 = puVar1;
        do {
          uVar14 = *puVar12;
          uVar13 = puVar12[3];
          uVar10 = puVar12[2];
          lVar8 = lVar8 + -0x20;
          puVar9[1] = puVar12[1];
          *puVar9 = uVar14;
          puVar9[3] = uVar13;
          puVar9[2] = uVar10;
          puVar9 = puVar9 + 4;
          puVar12 = puVar12 + 4;
        } while (lVar8 != 0);
      }
      *(void **)this = pvVar5;
      *(undefined8 **)(this + 8) = puVar1;
      *(undefined8 **)(this + 0x10) = puVar11;
      *(void **)(this + 0x18) = (void *)((long)pvVar5 + uVar7 * 0x20);
      if (puVar2 != (undefined8 *)0x0) {
        operator_delete(puVar2);
        puVar11 = *(undefined8 **)(this + 0x10);
      }
    }
    else {
      lVar6 = (long)puVar12 - (long)puVar2 >> 5;
      lVar8 = lVar6 + 2;
      if (-1 < lVar6 + 1) {
        lVar8 = lVar6 + 1;
      }
      lVar8 = lVar8 >> 1;
      if (puVar12 == puVar9) {
        puVar11 = puVar12 + lVar8 * -4;
      }
      else {
        do {
          uVar3 = *(undefined4 *)puVar12;
          puVar11 = puVar12 + lVar8 * -4;
          uVar14 = puVar12[2];
          uVar13 = puVar12[1];
          uVar10 = puVar12[3];
          puVar12 = puVar12 + 4;
          *(undefined4 *)puVar11 = uVar3;
          puVar11[2] = uVar14;
          puVar11[1] = uVar13;
          puVar11[3] = uVar10;
        } while (puVar12 != puVar9);
        puVar9 = *(undefined8 **)(this + 8);
        puVar11 = puVar12 + lVar8 * -4;
      }
      *(undefined8 **)(this + 8) = puVar9 + lVar8 * -4;
      *(undefined8 **)(this + 0x10) = puVar11;
    }
  }
  uVar14 = *(undefined8 *)param_1;
  uVar13 = *(undefined8 *)(param_1 + 6);
  uVar10 = *(undefined8 *)(param_1 + 4);
  puVar11[1] = *(undefined8 *)(param_1 + 2);
  *puVar11 = uVar14;
  puVar11[3] = uVar13;
  puVar11[2] = uVar10;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 0x20;
  return;
}


