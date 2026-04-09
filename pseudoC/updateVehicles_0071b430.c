// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateVehicles
// Entry Point: 0071b430
// Size: 748 bytes
// Signature: undefined __thiscall updateVehicles(TrafficSystem * this, float param_1)


/* TrafficSystem::updateVehicles(float) */

void __thiscall TrafficSystem::updateVehicles(TrafficSystem *this,float param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  TrafficVehicle *this_00;
  int iVar9;
  float fVar10;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  puVar1 = (uint *)(this + 0x4d18);
  uVar6 = *(uint *)(this + 0x11fc);
  uVar7 = (ulong)uVar6;
  uVar3 = *(uint *)(this + 0x11f8);
  if (*(uint *)(this + 0x11f8) < uVar6) {
    uVar3 = 0;
    plVar8 = (long *)(this + 0x1210);
    *(undefined4 *)(this + 0x11f8) = 0;
    do {
      if (*plVar8 != 0) {
        uVar3 = uVar3 + 1;
        *(uint *)(this + 0x11f8) = uVar3;
      }
      plVar8 = plVar8 + 0x62;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    if ((uVar3 == uVar6) && (uVar3 = uVar6, *puVar1 != 0)) {
      uVar7 = 0;
      do {
        fVar10 = (float)PCGRand::getRandomFloatExclusive();
        if (*(uint *)(this + 0x11fc) != 0) {
          uVar5 = 0;
          do {
            if (fVar10 <= *(float *)(this + uVar5 * 4 + 0x71d0)) goto LAB_0071b504;
            uVar5 = uVar5 + 1;
          } while (*(uint *)(this + 0x11fc) != uVar5);
        }
        uVar5 = 0;
LAB_0071b504:
        TrafficVehicle::load
                  ((TrafficVehicle *)(this + uVar7 * 0x3a8 + 0x4d20),(uint)uVar5,(uint)uVar7,
                   (TrafficVehicleSource *)(this + 0x1200),(VehicleColors *)(this + 0xb8),
                   (VehicleSharedContext *)(this + 0x4c88),*(TransformGroup **)(this + 0x68),
                   (bool)this[0xb4],(bool)this[0xb5],(bool)this[0xb6],
                   (RandomGenerator *)(this + 0xa0),*(uint *)(this + 0x7264));
        uVar7 = uVar7 + 1;
      } while (uVar7 < *puVar1);
      uVar3 = *(uint *)(this + 0x11f8);
      uVar6 = *(uint *)(this + 0x11fc);
    }
  }
  if ((uVar3 == uVar6) && (this[0xb0] != (TrafficSystem)0x0)) {
    if (this[0xb1] == (TrafficSystem)0x0) {
      if (*puVar1 != 0) {
        uVar7 = 0;
        do {
          fVar10 = (float)PCGRand::getRandomFloatExclusive();
          if (*(uint *)(this + 0x11fc) != 0) {
            uVar5 = 0;
            do {
              if (fVar10 <= *(float *)(this + uVar5 * 4 + 0x71d0)) goto LAB_0071b5d8;
              uVar5 = uVar5 + 1;
            } while (*(uint *)(this + 0x11fc) != uVar5);
          }
          uVar5 = 0;
LAB_0071b5d8:
          assignLicensePlate(this,*(TransformGroup **)(this + uVar7 * 0x3a8 + 0x4d70),
                             (basic_string *)(this + (uVar5 & 0xffffffff) * 0x310 + 0x1258),
                             (basic_string *)(this + (uVar5 & 0xffffffff) * 0x310 + 0x1270));
          uVar7 = uVar7 + 1;
        } while (uVar7 < *puVar1);
      }
      this[0xb1] = (TrafficSystem)0x1;
    }
    EngineManager::getInstance();
    lVar4 = Renderer::getCamera();
    if (lVar4 != 0) {
      RawTransformGroup::updateWorldTransformation();
      local_80 = *(undefined4 *)(lVar4 + 0xf0);
      local_88 = *(undefined8 *)(lVar4 + 0xe8);
      fVar10 = powf(0.99,param_1);
      if (*puVar1 != 0) {
        uVar7 = 0;
        this_00 = (TrafficVehicle *)(this + 0x4d20);
        iVar9 = 1;
        do {
          uVar3 = TrafficVehicle::update
                            (this_00,(Vector3 *)&local_88,0 < iVar9,param_1,fVar10,
                             (bool)this[0x7270],(bool)this[0x7271],
                             *(VehicleNavigationMapGenerator **)(this + 0x7268));
          iVar9 = iVar9 - (uVar3 & 1);
          uVar7 = uVar7 + 1;
          this_00 = this_00 + 0x3a8;
        } while (uVar7 < *puVar1);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


