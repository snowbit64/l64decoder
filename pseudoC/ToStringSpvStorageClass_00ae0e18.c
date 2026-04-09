// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToStringSpvStorageClass
// Entry Point: 00ae0e18
// Size: 856 bytes
// Signature: undefined __cdecl ToStringSpvStorageClass(SpvStorageClass_ param_1)


/* ToStringSpvStorageClass(SpvStorageClass_) */

void ToStringSpvStorageClass(SpvStorageClass_ param_1)

{
  undefined8 *puVar1;
  undefined uVar2;
  undefined8 *in_x8;
  undefined4 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (0x14cf < (int)param_1) {
    if (0x15e4 < (int)param_1) {
      if (param_1 == 0x15e5) {
        *(undefined *)((long)in_x8 + 0x11) = 0;
        *(undefined *)in_x8 = 0x20;
        *(undefined8 *)((long)in_x8 + 9) = 0x4c45544e496e6f69;
        *(undefined8 *)((long)in_x8 + 1) = 0x7463655365646f43;
        return;
      }
      if (param_1 == 0x1730) {
        pcVar4 = "DeviceOnlyINTEL";
        goto LAB_00ae1134;
      }
      if (param_1 != 0x1731) goto switchD_00ae0e54_caseD_e;
      pcVar4 = "HostOnlyINTEL";
      goto LAB_00ae1094;
    }
    switch(param_1) {
    case 0x14d0:
      pcVar4 = "CallableDataKHR";
      goto LAB_00ae1134;
    case 0x14d1:
      puVar1 = (undefined8 *)operator_new(0x20);
      in_x8[2] = puVar1;
      *(undefined *)((long)puVar1 + 0x17) = 0;
      in_x8[1] = 0x17;
      *in_x8 = 0x21;
      puVar1[1] = 0x656c62616c6c6143;
      *puVar1 = 0x676e696d6f636e49;
      *(undefined8 *)((long)puVar1 + 0xf) = 0x52484b6174614465;
      return;
    default:
      goto switchD_00ae0e54_caseD_e;
    case 0x14da:
      pcVar4 = "RayPayloadKHR";
      goto LAB_00ae1094;
    case 0x14db:
      pcVar4 = "HitAttributeKHR";
LAB_00ae1134:
      uVar8 = *(undefined8 *)pcVar4;
      *(undefined *)in_x8 = 0x1e;
      uVar5 = *(undefined8 *)((long)pcVar4 + 7);
      *(undefined *)(in_x8 + 2) = 0;
      *(undefined8 *)((long)in_x8 + 1) = uVar8;
      in_x8[1] = uVar5;
      return;
    case 0x14de:
      pcVar4 = "IncomingRayPayloadKHR";
      break;
    case 0x14df:
      pcVar4 = "ShaderRecordBufferKHR";
      break;
    case 0x14e5:
      pcVar4 = "PhysicalStorageBuffer";
    }
    uVar9 = *(undefined8 *)((long)pcVar4 + 8);
    uVar8 = *(undefined8 *)pcVar4;
    *(undefined *)in_x8 = 0x2a;
    uVar5 = *(undefined8 *)((long)pcVar4 + 0xd);
    *(undefined *)((long)in_x8 + 0x16) = 0;
    *(undefined8 *)((long)in_x8 + 9) = uVar9;
    *(undefined8 *)((long)in_x8 + 1) = uVar8;
    *(undefined8 *)((long)in_x8 + 0xe) = uVar5;
    return;
  }
  switch(param_1) {
  case 0:
    pcVar4 = "UniformConstant";
    goto LAB_00ae1134;
  case 1:
    uVar2 = 10;
    uVar3 = 0x75706e49;
    uVar6 = 0x74;
    goto LAB_00ae1030;
  case 2:
    uVar3 = 0x66696e55;
    uVar7 = 0x6d726f66;
    goto LAB_00ae0fd0;
  case 3:
    uVar2 = 0xc;
    uVar3 = 0x7074754f;
    uVar6 = 0x7475;
    *(undefined *)((long)in_x8 + 7) = 0;
    goto LAB_00ae1030;
  case 4:
    *(undefined *)in_x8 = 0x12;
    *(undefined2 *)((long)in_x8 + 9) = 0x70;
    *(undefined8 *)((long)in_x8 + 1) = 0x756f72676b726f57;
    break;
  case 5:
    pcVar4 = "CrossWorkgroup";
LAB_00ae0f64:
    uVar8 = *(undefined8 *)pcVar4;
    *(undefined *)in_x8 = 0x1c;
    uVar5 = *(undefined8 *)((long)pcVar4 + 6);
    *(undefined *)((long)in_x8 + 0xf) = 0;
    *(undefined8 *)((long)in_x8 + 1) = uVar8;
    *(undefined8 *)((long)in_x8 + 7) = uVar5;
    break;
  case 6:
    uVar3 = 0x76697250;
    uVar7 = 0x65746176;
    goto LAB_00ae0fd0;
  case 7:
    *(undefined *)((long)in_x8 + 9) = 0;
    *(undefined *)in_x8 = 0x10;
    *(undefined8 *)((long)in_x8 + 1) = 0x6e6f6974636e7546;
    break;
  case 8:
    uVar3 = 0x656e6547;
    uVar7 = 0x63697265;
LAB_00ae0fd0:
    *(undefined *)in_x8 = 0xe;
    *(undefined4 *)((long)in_x8 + 1) = uVar3;
    *(undefined4 *)((long)in_x8 + 4) = uVar7;
    *(undefined *)(in_x8 + 1) = 0;
    break;
  case 9:
    *(undefined *)((long)in_x8 + 0xd) = 0;
    *(undefined *)in_x8 = 0x18;
    *(undefined4 *)((long)in_x8 + 9) = 0x746e6174;
    *(undefined8 *)((long)in_x8 + 1) = 0x736e6f4368737550;
    break;
  case 10:
    pcVar4 = "AtomicCounter";
    goto LAB_00ae1094;
  case 0xb:
    uVar2 = 10;
    uVar3 = 0x67616d49;
    uVar6 = 0x65;
LAB_00ae1030:
    *(undefined *)in_x8 = uVar2;
    *(undefined4 *)((long)in_x8 + 1) = uVar3;
    *(undefined2 *)((long)in_x8 + 5) = uVar6;
    break;
  case 0xc:
    pcVar4 = "StorageBuffer";
LAB_00ae1094:
    uVar8 = *(undefined8 *)pcVar4;
    *(undefined *)in_x8 = 0x1a;
    uVar5 = *(undefined8 *)((long)pcVar4 + 5);
    *(undefined *)((long)in_x8 + 0xe) = 0;
    *(undefined8 *)((long)in_x8 + 1) = uVar8;
    *(undefined8 *)((long)in_x8 + 6) = uVar5;
    break;
  default:
switchD_00ae0e54_caseD_e:
    *(undefined *)in_x8 = 6;
    *(undefined4 *)((long)in_x8 + 1) = 0x3f3f3f;
    break;
  case 0xffffffff:
    pcVar4 = "NOT APPLICABLE";
    goto LAB_00ae0f64;
  }
  return;
}


