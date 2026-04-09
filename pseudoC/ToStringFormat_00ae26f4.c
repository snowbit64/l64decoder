// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToStringFormat
// Entry Point: 00ae26f4
// Size: 888 bytes
// Signature: undefined __cdecl ToStringFormat(SpvReflectFormat param_1)


/* ToStringFormat(SpvReflectFormat) */

void ToStringFormat(SpvReflectFormat param_1)

{
  undefined8 *puVar1;
  undefined8 *in_x8;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  switch(param_1) {
  case 0:
    *(undefined *)((long)in_x8 + 0x14) = 0;
    *(undefined *)in_x8 = 0x26;
    *(undefined4 *)(in_x8 + 2) = 0x44454e49;
    *(undefined8 *)((long)in_x8 + 9) = 0x494645444e555f54;
    *(undefined8 *)((long)in_x8 + 1) = 0x414d524f465f4b56;
    return;
  default:
    *(undefined *)((long)in_x8 + 0xe) = 0;
    *(undefined *)in_x8 = 0x1a;
    *(undefined8 *)((long)in_x8 + 1) = 0x414d524f465f4b56;
    *(undefined8 *)((long)in_x8 + 6) = 0x3f3f3f5f54414d52;
    return;
  case 0x62:
    pcVar2 = "VK_FORMAT_R32_UINT";
    goto LAB_00ae28a8;
  case 99:
    pcVar2 = "VK_FORMAT_R32_SINT";
    goto LAB_00ae28a8;
  case 100:
    pcVar2 = "VK_FORMAT_R32_SFLOAT";
    goto LAB_00ae28d4;
  case 0x65:
    pcVar2 = "VK_FORMAT_R32G32_UINT";
    goto LAB_00ae2908;
  case 0x66:
    pcVar2 = "VK_FORMAT_R32G32_SINT";
    goto LAB_00ae2908;
  case 0x67:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar2 = "VK_FORMAT_R32G32_SFLOAT";
    goto LAB_00ae2938;
  case 0x68:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar2 = "VK_FORMAT_R32G32B32_UINT";
    goto LAB_00ae2988;
  case 0x69:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar2 = "VK_FORMAT_R32G32B32_SINT";
    goto LAB_00ae2988;
  case 0x6a:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar2 = "VK_FORMAT_R32G32B32_SFLOAT";
    goto LAB_00ae29c0;
  case 0x6b:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar2 = "VK_FORMAT_R32G32B32A32_UINT";
    break;
  case 0x6c:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar2 = "VK_FORMAT_R32G32B32A32_SINT";
    break;
  case 0x6d:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar2 = "VK_FORMAT_R32G32B32A32_SFLOAT";
    goto LAB_00ae2a40;
  case 0x6e:
    pcVar2 = "VK_FORMAT_R64_UINT";
    goto LAB_00ae28a8;
  case 0x6f:
    pcVar2 = "VK_FORMAT_R64_SINT";
LAB_00ae28a8:
    uVar4 = *(undefined8 *)((long)pcVar2 + 8);
    uVar3 = *(undefined8 *)pcVar2;
    *(undefined *)in_x8 = 0x24;
    *(undefined2 *)((long)in_x8 + 0x11) = 0x544e;
    *(undefined *)((long)in_x8 + 0x13) = 0;
    *(undefined8 *)((long)in_x8 + 9) = uVar4;
    *(undefined8 *)((long)in_x8 + 1) = uVar3;
    return;
  case 0x70:
    pcVar2 = "VK_FORMAT_R64_SFLOAT";
LAB_00ae28d4:
    uVar4 = *(undefined8 *)((long)pcVar2 + 8);
    uVar3 = *(undefined8 *)pcVar2;
    *(undefined *)in_x8 = 0x28;
    *(undefined4 *)((long)in_x8 + 0x11) = 0x54414f4c;
    *(undefined *)((long)in_x8 + 0x15) = 0;
    *(undefined8 *)((long)in_x8 + 9) = uVar4;
    *(undefined8 *)((long)in_x8 + 1) = uVar3;
    return;
  case 0x71:
    pcVar2 = "VK_FORMAT_R64G64_UINT";
    goto LAB_00ae2908;
  case 0x72:
    pcVar2 = "VK_FORMAT_R64G64_SINT";
LAB_00ae2908:
    uVar5 = *(undefined8 *)((long)pcVar2 + 8);
    uVar4 = *(undefined8 *)pcVar2;
    *(undefined *)in_x8 = 0x2a;
    uVar3 = *(undefined8 *)((long)pcVar2 + 0xd);
    *(undefined *)((long)in_x8 + 0x16) = 0;
    *(undefined8 *)((long)in_x8 + 9) = uVar5;
    *(undefined8 *)((long)in_x8 + 1) = uVar4;
    *(undefined8 *)((long)in_x8 + 0xe) = uVar3;
    return;
  case 0x73:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar2 = "VK_FORMAT_R64G64_SFLOAT";
LAB_00ae2938:
    uVar5 = *(undefined8 *)((long)pcVar2 + 8);
    uVar4 = *(undefined8 *)pcVar2;
    in_x8[2] = puVar1;
    uVar3 = *(undefined8 *)((long)pcVar2 + 0xf);
    *(undefined *)((long)puVar1 + 0x17) = 0;
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    *(undefined8 *)((long)puVar1 + 0xf) = uVar3;
    in_x8[1] = 0x17;
    *in_x8 = 0x21;
    return;
  case 0x74:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar2 = "VK_FORMAT_R64G64B64_UINT";
    goto LAB_00ae2988;
  case 0x75:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar2 = "VK_FORMAT_R64G64B64_SINT";
LAB_00ae2988:
    uVar5 = *(undefined8 *)((long)pcVar2 + 8);
    uVar4 = *(undefined8 *)pcVar2;
    in_x8[2] = puVar1;
    uVar3 = *(undefined8 *)((long)pcVar2 + 0x10);
    *(undefined *)(puVar1 + 3) = 0;
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    puVar1[2] = uVar3;
    in_x8[1] = 0x18;
    *in_x8 = 0x21;
    return;
  case 0x76:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar2 = "VK_FORMAT_R64G64B64_SFLOAT";
LAB_00ae29c0:
    uVar4 = *(undefined8 *)((long)pcVar2 + 8);
    uVar3 = *(undefined8 *)pcVar2;
    in_x8[2] = puVar1;
    uVar6 = *(undefined8 *)((long)pcVar2 + 0x12);
    uVar5 = *(undefined8 *)((long)pcVar2 + 10);
    *(undefined *)((long)puVar1 + 0x1a) = 0;
    uVar7 = 0x1a;
    puVar1[1] = uVar4;
    *puVar1 = uVar3;
    *(undefined8 *)((long)puVar1 + 0x12) = uVar6;
    *(undefined8 *)((long)puVar1 + 10) = uVar5;
    goto LAB_00ae2a5c;
  case 0x77:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar2 = "VK_FORMAT_R64G64B64A64_UINT";
    break;
  case 0x78:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar2 = "VK_FORMAT_R64G64B64A64_SINT";
    break;
  case 0x79:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar2 = "VK_FORMAT_R64G64B64A64_SFLOAT";
LAB_00ae2a40:
    uVar4 = *(undefined8 *)((long)pcVar2 + 8);
    uVar3 = *(undefined8 *)pcVar2;
    in_x8[2] = puVar1;
    uVar6 = *(undefined8 *)((long)pcVar2 + 0x15);
    uVar5 = *(undefined8 *)((long)pcVar2 + 0xd);
    *(undefined *)((long)puVar1 + 0x1d) = 0;
    uVar7 = 0x1d;
    puVar1[1] = uVar4;
    *puVar1 = uVar3;
    *(undefined8 *)((long)puVar1 + 0x15) = uVar6;
    *(undefined8 *)((long)puVar1 + 0xd) = uVar5;
    goto LAB_00ae2a5c;
  }
  uVar4 = *(undefined8 *)((long)pcVar2 + 8);
  uVar3 = *(undefined8 *)pcVar2;
  in_x8[2] = puVar1;
  uVar6 = *(undefined8 *)((long)pcVar2 + 0x13);
  uVar5 = *(undefined8 *)((long)pcVar2 + 0xb);
  *(undefined *)((long)puVar1 + 0x1b) = 0;
  uVar7 = 0x1b;
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  *(undefined8 *)((long)puVar1 + 0x13) = uVar6;
  *(undefined8 *)((long)puVar1 + 0xb) = uVar5;
LAB_00ae2a5c:
  in_x8[1] = uVar7;
  *in_x8 = 0x21;
  return;
}


