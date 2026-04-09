// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onEntity
// Entry Point: 0072f908
// Size: 308 bytes
// Signature: undefined __cdecl onEntity(uint param_1, int param_2, btCollisionObject * param_3, bool param_4)


/* VehicleNavigationMapGenerator::PhysicsReportCollectAll::onEntity(unsigned int, int,
   btCollisionObject const*, bool) */

undefined8
VehicleNavigationMapGenerator::PhysicsReportCollectAll::onEntity
          (uint param_1,int param_2,btCollisionObject *param_3,bool param_4)

{
  ulong *puVar1;
  ulong uVar2;
  EntityRegistryManager *this;
  long lVar3;
  void *__dest;
  void **ppvVar4;
  void *__src;
  ulong __n;
  
  uVar2 = (ulong)param_1;
  if (param_2 != -1) {
    this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    EntityRegistryManager::getEntityById(this,param_2);
    lVar3 = RawTransformGroup::getPhysicsObject();
    if ((*(byte *)(lVar3 + 8) >> 3 & 1) != 0) {
      if ((*(uint *)(uVar2 + 0x18) & *(uint *)(lVar3 + 0x58)) == 0) {
        ppvVar4 = *(void ***)(uVar2 + 0x10);
      }
      else {
        ppvVar4 = *(void ***)(uVar2 + 8);
      }
      puVar1 = (ulong *)ppvVar4[1];
      if (puVar1 == (ulong *)ppvVar4[2]) {
        __src = *ppvVar4;
        __n = (long)puVar1 - (long)__src;
        uVar2 = ((long)__n >> 3) + 1;
        if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar2 <= (ulong)((long)__n >> 2)) {
          uVar2 = (long)__n >> 2;
        }
        if (0x7ffffffffffffff7 < __n) {
          uVar2 = 0x1fffffffffffffff;
        }
        if (uVar2 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          __dest = operator_new(uVar2 << 3);
        }
        puVar1 = (ulong *)((long)__dest + ((long)__n >> 3) * 8);
        *puVar1 = (ulong)param_4;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        *ppvVar4 = __dest;
        ppvVar4[1] = puVar1 + 1;
        ppvVar4[2] = (void *)((long)__dest + uVar2 * 8);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      else {
        *puVar1 = (ulong)param_4;
        ppvVar4[1] = puVar1 + 1;
      }
    }
  }
  return 1;
}


