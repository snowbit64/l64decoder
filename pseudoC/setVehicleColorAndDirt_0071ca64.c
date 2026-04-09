// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVehicleColorAndDirt
// Entry Point: 0071ca64
// Size: 600 bytes
// Signature: undefined __cdecl setVehicleColorAndDirt(VehicleColors * param_1, TransformGroup * param_2, VehicleSource * param_3, float param_4, RandomGenerator * param_5)


/* TrafficVehicle::setVehicleColorAndDirt(TrafficVehicle::VehicleColors*, TransformGroup*,
   TrafficVehicle::VehicleSource*, float, RandomGenerator*) */

void TrafficVehicle::setVehicleColorAndDirt
               (VehicleColors *param_1,TransformGroup *param_2,VehicleSource *param_3,float param_4,
               RandomGenerator *param_5)

{
  long *plVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  GsShape *this;
  CustomShader *pCVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  GsShape *this_00;
  long lVar10;
  byte *pbVar11;
  uint local_94;
  long local_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if ((*(uint *)param_1 != 0) && (*(long *)(param_3 + 0x30) != *(long *)(param_3 + 0x28))) {
    iVar5 = PCGRand::getBiasedRandomUpToAndExcluding((PCGRand *)param_5,*(uint *)param_1);
    pbVar11 = *(byte **)(param_3 + 0x28);
    pbVar2 = *(byte **)(param_3 + 0x30);
    if (pbVar11 != pbVar2) {
      do {
        pbVar9 = *(byte **)(pbVar11 + 0x10);
        if ((*pbVar11 & 1) == 0) {
          pbVar9 = pbVar11 + 1;
        }
        this = (GsShape *)Node::getNodeFromReference((Node *)param_2,(char *)pbVar9);
        if ((this != (GsShape *)0x0) && (((byte)this[0x11] >> 3 & 1) != 0)) {
          GsShape::setCustomShaderParameter
                    (this,"colorMat0",(float *)(param_1 + (long)iVar5 * 0x10 + 4));
          if (((byte)this[0x11] >> 3 & 1) != 0) {
            plVar1 = (long *)(this + 0x178);
            if (*(short *)(this + 0x196) != 1) {
              plVar1 = *(long **)(this + 0x178);
            }
            lVar10 = *plVar1;
            if ((lVar10 != 0) &&
               (pCVar6 = (CustomShader *)GsMaterial::getCustomShader(),
               pCVar6 != (CustomShader *)0x0)) {
              uVar3 = *(uint *)(lVar10 + 0x88);
              local_94 = 0;
              uVar7 = CustomShader::getParameterIndex(pCVar6,uVar3,"RDT",&local_94);
              if ((uVar7 & 1) != 0) {
                uStack_88 = *(undefined8 *)
                             (*(long *)(*(long *)(*(long *)(pCVar6 + 0x110) + (ulong)uVar3 * 0xe0 +
                                                 0x40) + (ulong)local_94 * 8) + 0x38);
                local_90 = (ulong)(uint)param_4 << 0x20;
                GsShape::setCustomShaderParameter(this,"RDT",(float *)&local_90);
              }
            }
          }
          lVar10 = *(long *)(this + 0x28);
          if ((int)((ulong)(*(long *)(this + 0x30) - lVar10) >> 3) != 0) {
            uVar7 = 0;
            do {
              if ((((byte)this[0x10] >> 5 & 1) != 0) &&
                 (this_00 = *(GsShape **)(lVar10 + uVar7 * 8), ((byte)this_00[0x11] >> 3 & 1) != 0))
              {
                plVar1 = (long *)(this_00 + 0x178);
                if (*(short *)(this_00 + 0x196) != 1) {
                  plVar1 = *(long **)(this_00 + 0x178);
                }
                lVar10 = *plVar1;
                if ((lVar10 != 0) &&
                   (pCVar6 = (CustomShader *)GsMaterial::getCustomShader(),
                   pCVar6 != (CustomShader *)0x0)) {
                  uVar3 = *(uint *)(lVar10 + 0x88);
                  local_94 = 0;
                  uVar8 = CustomShader::getParameterIndex(pCVar6,uVar3,"RDT",&local_94);
                  if ((uVar8 & 1) != 0) {
                    uStack_88 = *(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)(pCVar6 + 0x110) +
                                                      (ulong)uVar3 * 0xe0 + 0x40) +
                                           (ulong)local_94 * 8) + 0x38);
                    local_90 = (ulong)(uint)param_4 << 0x20;
                    GsShape::setCustomShaderParameter(this_00,"RDT",(float *)&local_90);
                  }
                }
              }
              lVar10 = *(long *)(this + 0x28);
              uVar7 = uVar7 + 1;
            } while (uVar7 < ((ulong)(*(long *)(this + 0x30) - lVar10) >> 3 & 0xffffffff));
          }
        }
        pbVar11 = pbVar11 + 0x18;
      } while (pbVar11 != pbVar2);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


