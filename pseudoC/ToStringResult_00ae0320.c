// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToStringResult
// Entry Point: 00ae0320
// Size: 908 bytes
// Signature: undefined __cdecl ToStringResult(SpvReflectResult param_1)


/* ToStringResult(SpvReflectResult) */

void ToStringResult(SpvReflectResult param_1)

{
  undefined8 *puVar1;
  undefined8 *in_x8;
  undefined2 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  switch(param_1) {
  case 0:
    *(undefined *)(in_x8 + 1) = 0;
    *(undefined *)in_x8 = 0xe;
    *(undefined4 *)((long)in_x8 + 1) = 0x43435553;
    *(undefined4 *)((long)in_x8 + 4) = 0x53534543;
    break;
  case 1:
    *(undefined *)in_x8 = 0x12;
    *(undefined2 *)((long)in_x8 + 9) = 0x59;
    *(undefined8 *)((long)in_x8 + 1) = 0x444145525f544f4e;
    break;
  case 2:
    uVar2 = 0x4445;
    pcVar4 = "ERROR_PARSE_FAILED";
    goto LAB_00ae0408;
  case 3:
    uVar2 = 0x4445;
    pcVar4 = "ERROR_ALLOC_FAILED";
    goto LAB_00ae0408;
  case 4:
    uVar3 = 0x44454445;
    pcVar4 = "ERROR_RANGE_EXCEEDED";
    goto LAB_00ae044c;
  case 5:
    uVar2 = 0x5245;
    pcVar4 = "ERROR_NULL_POINTER";
LAB_00ae0408:
    uVar6 = *(undefined8 *)((long)pcVar4 + 8);
    uVar5 = *(undefined8 *)pcVar4;
    *(undefined *)in_x8 = 0x24;
    *(undefined2 *)((long)in_x8 + 0x11) = uVar2;
    *(undefined *)((long)in_x8 + 0x13) = 0;
    *(undefined8 *)((long)in_x8 + 9) = uVar6;
    *(undefined8 *)((long)in_x8 + 1) = uVar5;
    break;
  case 6:
    uVar3 = 0x524f5252;
    pcVar4 = "ERROR_INTERNAL_ERROR";
    goto LAB_00ae044c;
  case 7:
    uVar3 = 0x48435441;
    pcVar4 = "ERROR_COUNT_MISMATCH";
LAB_00ae044c:
    uVar6 = *(undefined8 *)((long)pcVar4 + 8);
    uVar5 = *(undefined8 *)pcVar4;
    *(undefined *)in_x8 = 0x28;
    *(undefined4 *)((long)in_x8 + 0x11) = uVar3;
    *(undefined *)((long)in_x8 + 0x15) = 0;
    *(undefined8 *)((long)in_x8 + 9) = uVar6;
    *(undefined8 *)((long)in_x8 + 1) = uVar5;
    break;
  case 8:
    puVar1 = (undefined8 *)operator_new(0x20);
    in_x8[2] = puVar1;
    *(undefined *)((long)puVar1 + 0x17) = 0;
    in_x8[1] = 0x17;
    *in_x8 = 0x21;
    puVar1[1] = 0x4f4e5f544e454d45;
    *puVar1 = 0x4c455f524f525245;
    *(undefined8 *)((long)puVar1 + 0xf) = 0x444e554f465f544f;
    break;
  case 9:
    puVar1 = (undefined8 *)operator_new(0x20);
    in_x8[2] = puVar1;
    *(undefined *)((long)puVar1 + 0x1d) = 0;
    in_x8[1] = 0x1d;
    *in_x8 = 0x21;
    puVar1[1] = 0x41564e495f565249;
    *puVar1 = 0x50535f524f525245;
    *(undefined8 *)((long)puVar1 + 0x15) = 0x455a49535f45444f;
    *(undefined8 *)((long)puVar1 + 0xd) = 0x435f44494c41564e;
    break;
  case 10:
    puVar1 = (undefined8 *)operator_new(0x30);
    pcVar4 = "ERROR_SPIRV_INVALID_MAGIC_NUMBER";
    goto LAB_00ae0538;
  case 0xb:
    puVar1 = (undefined8 *)operator_new(0x20);
    in_x8[2] = puVar1;
    *(undefined *)((long)puVar1 + 0x1a) = 0;
    in_x8[1] = 0x1a;
    *in_x8 = 0x21;
    puVar1[1] = 0x58454e555f565249;
    *puVar1 = 0x50535f524f525245;
    *(undefined8 *)((long)puVar1 + 0x12) = 0x464f455f44455443;
    *(undefined8 *)((long)puVar1 + 10) = 0x455058454e555f56;
    break;
  case 0xc:
    puVar1 = (undefined8 *)operator_new(0x30);
    pcVar4 = "ERROR_SPIRV_INVALID_ID_REFERENCE";
LAB_00ae0538:
    uVar6 = *(undefined8 *)((long)pcVar4 + 8);
    uVar5 = *(undefined8 *)pcVar4;
    uVar8 = *(undefined8 *)((long)pcVar4 + 0x18);
    uVar7 = *(undefined8 *)((long)pcVar4 + 0x10);
    in_x8[2] = puVar1;
    *(undefined *)(puVar1 + 4) = 0;
    puVar1[1] = uVar6;
    *puVar1 = uVar5;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    in_x8[1] = 0x20;
    *in_x8 = 0x31;
    break;
  case 0xd:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar4 = "ERROR_SPIRV_SET_NUMBER_OVERFLOW";
    goto LAB_00ae0648;
  case 0xe:
    puVar1 = (undefined8 *)operator_new(0x30);
    uVar2 = 0x53;
    pcVar4 = "ERROR_SPIRV_INVALID_STORAGE_CLASS";
    goto LAB_00ae05e0;
  case 0xf:
    *(undefined *)((long)in_x8 + 0x16) = 0;
    *(undefined *)in_x8 = 0x2a;
    *(undefined8 *)((long)in_x8 + 9) = 0x554345525f565249;
    *(undefined8 *)((long)in_x8 + 1) = 0x50535f524f525245;
    *(undefined8 *)((long)in_x8 + 0xe) = 0x4e4f495352554345;
    break;
  case 0x10:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar4 = "ERROR_SPIRV_INVALID_INSTRUCTION";
    goto LAB_00ae0648;
  case 0x11:
    puVar1 = (undefined8 *)operator_new(0x30);
    uVar2 = 0x41;
    pcVar4 = "ERROR_SPIRV_UNEXPECTED_BLOCK_DATA";
LAB_00ae05e0:
    uVar6 = *(undefined8 *)((long)pcVar4 + 8);
    uVar5 = *(undefined8 *)pcVar4;
    uVar8 = *(undefined8 *)((long)pcVar4 + 0x18);
    uVar7 = *(undefined8 *)((long)pcVar4 + 0x10);
    in_x8[2] = puVar1;
    *(undefined2 *)(puVar1 + 4) = uVar2;
    puVar1[1] = uVar6;
    *puVar1 = uVar5;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    in_x8[1] = 0x21;
    *in_x8 = 0x31;
    break;
  case 0x12:
    puVar1 = (undefined8 *)operator_new(0x30);
    in_x8[2] = puVar1;
    *(undefined *)((long)puVar1 + 0x2a) = 0;
    in_x8[1] = 0x2a;
    *in_x8 = 0x31;
    puVar1[1] = 0x41564e495f565249;
    *puVar1 = 0x50535f524f525245;
    puVar1[3] = 0x5245424d454d5f4b;
    puVar1[2] = 0x434f4c425f44494c;
    *(undefined8 *)((long)puVar1 + 0x22) = 0x45434e4552454645;
    *(undefined8 *)((long)puVar1 + 0x1a) = 0x525f5245424d454d;
    break;
  case 0x13:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar4 = "ERROR_SPIRV_INVALID_ENTRY_POINT";
LAB_00ae0648:
    uVar6 = *(undefined8 *)((long)pcVar4 + 8);
    uVar5 = *(undefined8 *)pcVar4;
    in_x8[2] = puVar1;
    uVar8 = *(undefined8 *)((long)pcVar4 + 0x17);
    uVar7 = *(undefined8 *)((long)pcVar4 + 0xf);
    *(undefined *)((long)puVar1 + 0x1f) = 0;
    puVar1[1] = uVar6;
    *puVar1 = uVar5;
    *(undefined8 *)((long)puVar1 + 0x17) = uVar8;
    *(undefined8 *)((long)puVar1 + 0xf) = uVar7;
    in_x8[1] = 0x1f;
    *in_x8 = 0x21;
    break;
  case 0x14:
    puVar1 = (undefined8 *)operator_new(0x30);
    in_x8[2] = puVar1;
    *(undefined *)((long)puVar1 + 0x22) = 0;
    *(undefined2 *)(puVar1 + 4) = 0x4544;
    in_x8[1] = 0x22;
    *in_x8 = 0x31;
    puVar1[1] = 0x41564e495f565249;
    *puVar1 = 0x50535f524f525245;
    puVar1[3] = 0x4f4d5f4e4f495455;
    puVar1[2] = 0x434558455f44494c;
    break;
  default:
    *(undefined *)in_x8 = 6;
    *(undefined4 *)((long)in_x8 + 1) = 0x3f3f3f;
    return;
  }
  return;
}


