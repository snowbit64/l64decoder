// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endElement
// Entry Point: 008fee20
// Size: 160 bytes
// Signature: undefined __cdecl endElement(void * param_1, char * param_2)


/* I3DLoad::endElement(void*, char const*) */

void I3DLoad::endElement(void *param_1,char *param_2)

{
  if (**(char **)((long)param_1 + 0x1c0) != '\0') {
    *(undefined *)((long)param_1 + 0x11) = 1;
    goto LAB_008feea8;
  }
  if (*(char *)((long)param_1 + 0x11) != '\0') goto LAB_008feea8;
  if (*(int *)((long)param_1 + 0x30) < 1) {
LAB_008fee70:
    if (*(code **)(s_nodeClasses +
                  (ulong)*(uint *)(*(long *)((long)param_1 + 0x20) + -4) * 0x30 + 0x18) !=
        (code *)0x0) {
      (**(code **)(s_nodeClasses +
                  (ulong)*(uint *)(*(long *)((long)param_1 + 0x20) + -4) * 0x30 + 0x18))(param_1);
    }
  }
  else if (*(int *)((long)param_1 + 0x14) + -1 <= *(int *)((long)param_1 + 0x30)) {
    *(undefined4 *)((long)param_1 + 0x30) = 0;
    goto LAB_008fee70;
  }
  *(long *)((long)param_1 + 0x20) = *(long *)((long)param_1 + 0x20) + -4;
LAB_008feea8:
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + -1;
  return;
}


