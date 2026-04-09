// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 0085af28
// Size: 328 bytes
// Signature: undefined __thiscall push_back(__split_buffer<std::__ndk1::pair<unsigned_int,DensityMapSyncer::ConnectionData*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,DensityMapSyncer::ConnectionData*>>&> * this, pair * param_1)


/* std::__ndk1::__split_buffer<std::__ndk1::pair<unsigned int, DensityMapSyncer::ConnectionData*>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned int, DensityMapSyncer::ConnectionData*>
   >&>::push_back(std::__ndk1::pair<unsigned int, DensityMapSyncer::ConnectionData*>&&) */

void __thiscall
std::__ndk1::
__split_buffer<std::__ndk1::pair<unsigned_int,DensityMapSyncer::ConnectionData*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,DensityMapSyncer::ConnectionData*>>&>
::push_back(__split_buffer<std::__ndk1::pair<unsigned_int,DensityMapSyncer::ConnectionData*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,DensityMapSyncer::ConnectionData*>>&>
            *this,pair *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  
  puVar7 = *(undefined8 **)(this + 0x10);
  if (puVar7 == *(undefined8 **)(this + 0x18)) {
    puVar1 = *(undefined8 **)this;
    puVar12 = *(undefined8 **)(this + 8);
    if (puVar12 < puVar1 || (long)puVar12 - (long)puVar1 == 0) {
      uVar6 = (long)puVar7 - (long)puVar1 >> 3;
      if ((long)puVar7 - (long)puVar1 == 0) {
        uVar6 = 1;
      }
      if (uVar6 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar4 = operator_new(uVar6 * 0x10);
      puVar8 = (undefined8 *)((long)pvVar4 + (uVar6 & 0x3ffffffffffffffc) * 4);
      uVar3 = (long)puVar7 - (long)puVar12;
      puVar7 = puVar8;
      if (uVar3 != 0) {
        puVar7 = (undefined8 *)((long)puVar8 + (uVar3 & 0xfffffffffffffff0));
        lVar9 = ((long)uVar3 >> 4) << 4;
        puVar10 = puVar8;
        do {
          uVar11 = *puVar12;
          lVar9 = lVar9 + -0x10;
          puVar10[1] = puVar12[1];
          *puVar10 = uVar11;
          puVar10 = puVar10 + 2;
          puVar12 = puVar12 + 2;
        } while (lVar9 != 0);
      }
      *(void **)this = pvVar4;
      *(undefined8 **)(this + 8) = puVar8;
      *(undefined8 **)(this + 0x10) = puVar7;
      *(void **)(this + 0x18) = (void *)((long)pvVar4 + uVar6 * 0x10);
      if (puVar1 != (undefined8 *)0x0) {
        operator_delete(puVar1);
        puVar7 = *(undefined8 **)(this + 0x10);
      }
    }
    else {
      lVar5 = (long)puVar12 - (long)puVar1 >> 4;
      lVar9 = lVar5 + 2;
      if (-1 < lVar5 + 1) {
        lVar9 = lVar5 + 1;
      }
      lVar9 = lVar9 >> 1;
      puVar8 = puVar12 + lVar9 * -2;
      puVar1 = puVar8;
      if (puVar12 != puVar7) {
        do {
          uVar2 = *(undefined4 *)puVar12;
          puVar1 = puVar12 + lVar9 * -2;
          uVar11 = puVar12[1];
          puVar12 = puVar12 + 2;
          *(undefined4 *)puVar1 = uVar2;
          puVar1[1] = uVar11;
        } while (puVar12 != puVar7);
        puVar1 = puVar12 + lVar9 * -2;
      }
      puVar7 = puVar1;
      *(undefined8 **)(this + 8) = puVar8;
      *(undefined8 **)(this + 0x10) = puVar7;
    }
  }
  uVar11 = *(undefined8 *)param_1;
  puVar7[1] = *(undefined8 *)(param_1 + 2);
  *puVar7 = uVar11;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 0x10;
  return;
}


