// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVolume
// Entry Point: 00995984
// Size: 216 bytes
// Signature: undefined getVolume(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsRBObject::getVolume() const */

float Bt2PhysicsRBObject::getVolume(void)

{
  long lVar1;
  long in_x0;
  btCollisionShape *pbVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float local_80 [14];
  long local_48;
  
  lVar1 = tpidr_el0;
  fVar5 = 0.0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(in_x0 + 0x10) != 0) && (*(long *)(in_x0 + 0x30) != 0)) {
    pbVar2 = *(btCollisionShape **)(*(long *)(in_x0 + 0x30) + 200);
    if (*(int *)(pbVar2 + 8) == 0x1f) {
      if (0 < *(int *)(pbVar2 + 0x24)) {
        fVar5 = 0.0;
        lVar3 = 0;
        lVar4 = 0x40;
        do {
          Bt2PhysicsColShapeCache::getVolumeInfo
                    (*(btCollisionShape **)(*(long *)(pbVar2 + 0x30) + lVar4),(VolumeInfo *)local_80
                    );
          lVar3 = lVar3 + 1;
          lVar4 = lVar4 + 0x58;
          fVar5 = fVar5 + local_80[0];
        } while (lVar3 < *(int *)(pbVar2 + 0x24));
      }
    }
    else {
      Bt2PhysicsColShapeCache::getVolumeInfo(pbVar2,(VolumeInfo *)local_80);
      fVar5 = local_80[0] + 0.0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return fVar5;
}


