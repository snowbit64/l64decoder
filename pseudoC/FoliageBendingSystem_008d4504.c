// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FoliageBendingSystem
// Entry Point: 008d4504
// Size: 524 bytes
// Signature: undefined __thiscall FoliageBendingSystem(FoliageBendingSystem * this, uint param_1, uint param_2, float param_3)


/* FoliageBendingSystem::FoliageBendingSystem(unsigned int, unsigned int, float) */

void __thiscall
FoliageBendingSystem::FoliageBendingSystem
          (FoliageBendingSystem *this,uint param_1,uint param_2,float param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  void *__dest;
  UpdateRenderingManager *this_00;
  long lVar6;
  ulong __n;
  ulong uVar7;
  
  Entity::Entity((Entity *)this,"FoliageBendingSystem",true);
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined ***)(this + 0x20) = &PTR__FoliageBendingSystem_00fde100;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined ***)(this + 0x28) = &PTR__FoliageBendingSystem_00fde128;
  *(undefined ***)this = &PTR__FoliageBendingSystem_00fde0c8;
                    /* try { // try from 008d4594 to 008d459f has its CatchHandler @ 008d4710 */
  DensityAnimationMap::DensityAnimationMap((DensityAnimationMap *)(this + 0x98),this);
  *(uint *)(this + 0x40) = param_1;
  *(undefined8 *)(this + 0x4d8) = 0;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x400000000000000;
  *(undefined8 *)(this + 0x4d0) = 0;
  *(undefined8 *)(this + 0x4c8) = 0;
                    /* try { // try from 008d45d4 to 008d45e7 has its CatchHandler @ 008d4718 */
  pvVar4 = operator_new__((ulong)param_1 * 0xa0);
  *(void **)(this + 0x30) = pvVar4;
  pvVar5 = operator_new__((ulong)param_1 << 3);
  *(void **)(this + 0x38) = pvVar5;
  if (param_1 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      puVar2 = *(undefined4 **)(this + 0x68);
      if (puVar2 == *(undefined4 **)(this + 0x70)) {
        pvVar5 = *(void **)(this + 0x60);
        __n = (long)puVar2 - (long)pvVar5;
        uVar1 = ((long)__n >> 2) + 1;
        if (uVar1 >> 0x3e != 0) {
                    /* try { // try from 008d46fc to 008d470f has its CatchHandler @ 008d4720 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)((long)__n >> 1)) {
          uVar1 = (long)__n >> 1;
        }
        if (0x7ffffffffffffffb < __n) {
          uVar1 = 0x3fffffffffffffff;
        }
        if (uVar1 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 008d4670 to 008d4673 has its CatchHandler @ 008d471c */
          __dest = operator_new(uVar1 << 2);
        }
        puVar2 = (undefined4 *)((long)__dest + ((long)__n >> 2) * 4);
        *puVar2 = (int)uVar7;
        if (0 < (long)__n) {
          memcpy(__dest,pvVar5,__n);
        }
        *(void **)(this + 0x60) = __dest;
        *(undefined4 **)(this + 0x68) = puVar2 + 1;
        *(void **)(this + 0x70) = (void *)((long)__dest + uVar1 * 4);
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5);
          pvVar4 = *(void **)(this + 0x30);
        }
      }
      else {
        *puVar2 = (int)uVar7;
        *(undefined4 **)(this + 0x68) = puVar2 + 1;
      }
      uVar3 = *(uint *)(this + 0x40);
      *(undefined *)((long)pvVar4 + lVar6) = 0;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0xa0;
    } while (uVar7 < uVar3);
  }
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x4c0) = 0;
  *(float *)(this + 0x4b8) = param_3;
                    /* try { // try from 008d46cc to 008d46d7 has its CatchHandler @ 008d4718 */
  this_00 = (UpdateRenderingManager *)UpdateRenderingManager::getInstance();
  UpdateRenderingManager::addUpdateableRendered(this_00,(UpdateableRendered *)(this + 0x20));
  return;
}


