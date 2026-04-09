// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b4628
// Entry Point: 007b4628
// Size: 228 bytes
// Signature: undefined FUN_007b4628(void)


void FUN_007b4628(long param_1,uint *param_2)

{
  long lVar1;
  EntityRegistryManager *this;
  long lVar2;
  GsBitStream *pGVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  RawTransformGroup::updateWorldTransformation();
  Matrix4x4::invert3x4((Matrix4x4 *)&local_78,(Matrix4x4 *)(param_1 + 0xb8));
  fVar4 = (float)param_2[0x10];
  fVar6 = (float)param_2[0xc];
  fVar7 = (float)param_2[0x14];
  uVar5 = NEON_fmadd(fVar6,local_70,fVar4 * local_60);
  local_80 = (float)NEON_fmadd(fVar7,local_50,uVar5);
  local_88 = CONCAT44((float)((ulong)local_48 >> 0x20) +
                      (float)((ulong)local_68 >> 0x20) * fVar4 +
                      (float)((ulong)local_78 >> 0x20) * fVar6 +
                      (float)((ulong)local_58 >> 0x20) * fVar7,
                      (float)local_48 +
                      (float)local_68 * fVar4 + (float)local_78 * fVar6 + (float)local_58 * fVar7);
  local_80 = local_40 + local_80;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar2 = EntityRegistryManager::getEntityById(this,*param_2);
  if (lVar2 != 0) {
    pGVar3 = (GsBitStream *)NetworkStream::getWriteStream();
    BaseTerrain::writeUpdateStream
              ((BaseTerrain *)(param_1 + 0x170),pGVar3,param_2[4],(Vector3 *)&local_88,param_2[8]);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


