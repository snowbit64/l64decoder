// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readFromStream
// Entry Point: 0072209c
// Size: 840 bytes
// Signature: undefined __thiscall readFromStream(TrafficVehicle * this, GsBitStream * param_1, bool param_2, float param_3, float param_4, float param_5, VehicleSharedContext * param_6)


/* TrafficVehicle::readFromStream(GsBitStream*, bool, float, float, float,
   TrafficVehicle::VehicleSharedContext*) */

void __thiscall
TrafficVehicle::readFromStream
          (TrafficVehicle *this,GsBitStream *param_1,bool param_2,float param_3,float param_4,
          float param_5,VehicleSharedContext *param_6)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_94;
  uint local_90;
  uchar local_8c [4];
  undefined4 local_88;
  float fStack_84;
  undefined4 local_80;
  undefined4 local_78;
  float fStack_74;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_8c[0] = '\0';
  GsBitStream::readBits(param_1,local_8c,1,true);
  if (local_8c[0] == '\0') {
    *(undefined4 *)(this + 0x340) = 0;
    this[0x40] = (TrafficVehicle)0x1;
  }
  else {
    local_90 = 0;
    GsBitStream::readBits(param_1,(uchar *)&local_90,*(uint *)(param_6 + 0xc),true);
    if (local_90 < *(uint *)(param_6 + 8)) {
      local_94 = 0;
      GsBitStream::readBits
                (param_1,(uchar *)&local_94,
                 *(uint *)(*(long *)(param_6 + 0x18) + (ulong)local_90 * 0x88 + 0x30),true);
      if ((param_2) && (this[0x21a] != (TrafficVehicle)0x0)) {
        fVar4 = (float)NEON_ucvtf(local_94);
        fVar5 = *(float *)(*(long *)(param_6 + 0x18) + (ulong)local_90 * 0x88 + 0x34);
        lVar3 = *(long *)(*(long *)(this + 0x48) + 0x18) + (ulong)local_90 * 0x88;
        *(long *)(this + 0x1e8) = lVar3;
        *(float *)(this + 0x308) = fVar4 / fVar5;
        plVar2 = *(long **)(lVar3 + 8);
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_78,&local_88);
        lVar3 = **(long **)(this + 0x1e8);
        RawTransformGroup::updateWorldTransformation();
        uVar6 = NEON_fmadd(local_78,*(undefined4 *)(lVar3 + 0xb8),
                           fStack_74 * *(float *)(lVar3 + 200));
        fVar4 = (float)NEON_fmadd(local_70,*(undefined4 *)(lVar3 + 0xd8),uVar6);
        *(float *)(this + 0x318) = fVar4 + *(float *)(lVar3 + 0xe8);
        uVar6 = NEON_fmadd(local_78,*(undefined4 *)(lVar3 + 0xbc),
                           fStack_74 * *(float *)(lVar3 + 0xcc));
        fVar4 = (float)NEON_fmadd(local_70,*(undefined4 *)(lVar3 + 0xdc),uVar6);
        *(float *)(this + 0x31c) = *(float *)(lVar3 + 0xec) + fVar4;
        uVar6 = NEON_fmadd(local_78,*(undefined4 *)(lVar3 + 0xc0),
                           fStack_74 * *(float *)(lVar3 + 0xd0));
        fVar4 = (float)NEON_fmadd(local_70,*(undefined4 *)(lVar3 + 0xe0),uVar6);
        *(float *)(this + 800) = *(float *)(lVar3 + 0xf0) + fVar4;
        lVar3 = **(long **)(this + 0x1e8);
        RawTransformGroup::updateWorldTransformation();
        uVar6 = NEON_fmadd(local_88,*(undefined4 *)(lVar3 + 0xb8),
                           fStack_84 * *(float *)(lVar3 + 200));
        fVar4 = (float)NEON_fmadd(local_80,*(undefined4 *)(lVar3 + 0xd8),uVar6);
        *(float *)(this + 0x330) = fVar4;
        uVar6 = NEON_fmadd(local_88,*(undefined4 *)(lVar3 + 0xbc),
                           fStack_84 * *(float *)(lVar3 + 0xcc));
        fVar5 = (float)NEON_fmadd(local_80,*(undefined4 *)(lVar3 + 0xdc),uVar6);
        *(float *)(this + 0x334) = fVar5;
        uVar6 = NEON_fmadd(local_88,*(undefined4 *)(lVar3 + 0xc0),
                           fStack_84 * *(float *)(lVar3 + 0xd0));
        fVar7 = (float)NEON_fmadd(local_80,*(undefined4 *)(lVar3 + 0xe0),uVar6);
        uVar6 = NEON_fmadd(fVar4,fVar4,fVar5 * fVar5);
        fVar9 = (float)NEON_fmadd(fVar7,fVar7,uVar6);
        fVar8 = 1.0;
        if (1e-06 < fVar9) {
          fVar8 = 1.0 / SQRT(fVar9);
        }
        *(float *)(this + 0x330) = fVar4 * fVar8;
        *(float *)(this + 0x334) = fVar5 * fVar8;
        *(float *)(this + 0x338) = fVar7 * fVar8;
        if (*(float *)(this + 0x340) == 0.0) {
          *(undefined4 *)(this + 0x214) = *(undefined4 *)(this + 0x308);
          *(undefined8 *)(this + 0x30c) = *(undefined8 *)(this + 0x318);
          *(undefined4 *)(this + 0x314) = *(undefined4 *)(this + 800);
          *(float *)(this + 0x340) = param_3 + param_5;
          *(undefined8 *)(this + 0x324) = *(undefined8 *)(this + 0x330);
          *(undefined4 *)(this + 0x32c) = *(undefined4 *)(this + 0x338);
        }
        else {
          fVar4 = *(float *)(this + 0x340) * (1.0 - *(float *)(this + 0x33c));
          fVar4 = (float)NEON_fmadd(param_3 - fVar4,0x3d4ccccd,fVar4);
          if (param_3 * 3.0 < fVar4) {
            fVar4 = param_3 * 3.0;
          }
          fVar5 = param_4 - *(float *)(this + 0x344);
          if (param_5 * 3.0 < param_4 - *(float *)(this + 0x344)) {
            fVar5 = param_5 * 3.0;
          }
          fVar5 = fVar5 + fVar4;
          if (fVar5 <= 1.0) {
            fVar5 = 1.0;
          }
          *(float *)(this + 0x340) = fVar5;
        }
        *(undefined4 *)(this + 0x33c) = 0;
        *(float *)(this + 0x344) = param_4;
        if (this[0x40] != (TrafficVehicle)0x0) {
          postSpawn();
          this[0x40] = (TrafficVehicle)0x0;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


