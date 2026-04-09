// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_ParserFree
// Entry Point: 00d2dad8
// Size: 1124 bytes
// Signature: undefined XML_ParserFree(void)


void XML_ParserFree(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    return;
  }
  plVar2 = *(long **)(param_1 + 0x2b0);
  do {
    if (plVar2 == (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x2b8);
      if (plVar3 == (long *)0x0) {
        lVar4 = *(long *)(param_1 + 0x238);
        do {
          if (lVar4 == 0) {
            lVar4 = *(long *)(param_1 + 0x240);
            if (lVar4 == 0) {
              lVar4 = *(long *)(param_1 + 0x2c8);
              while (lVar4 != 0) {
                lVar5 = *(long *)(lVar4 + 8);
                (**(code **)(param_1 + 0x28))(*(undefined8 *)(lVar4 + 0x20));
                (**(code **)(param_1 + 0x28))(lVar4);
                lVar4 = lVar5;
              }
              lVar4 = *(long *)(param_1 + 0x2c0);
              while (lVar4 != 0) {
                lVar5 = *(long *)(lVar4 + 8);
                (**(code **)(param_1 + 0x28))(*(undefined8 *)(lVar4 + 0x20));
                (**(code **)(param_1 + 0x28))(lVar4);
                lVar4 = lVar5;
              }
              plVar2 = *(long **)(param_1 + 0x310);
              while (plVar2 != (long *)0x0) {
                plVar2 = (long *)*plVar2;
                (**(code **)(*(long *)(param_1 + 0x338) + 0x10))();
              }
              plVar2 = *(long **)(param_1 + 0x318);
              while (plVar2 != (long *)0x0) {
                plVar2 = (long *)*plVar2;
                (**(code **)(*(long *)(param_1 + 0x338) + 0x10))();
              }
              plVar2 = *(long **)(param_1 + 0x340);
              while (plVar2 != (long *)0x0) {
                plVar2 = (long *)*plVar2;
                (**(code **)(*(long *)(param_1 + 0x368) + 0x10))();
              }
              plVar2 = *(long **)(param_1 + 0x348);
              while (plVar2 != (long *)0x0) {
                plVar2 = (long *)*plVar2;
                (**(code **)(*(long *)(param_1 + 0x368) + 0x10))();
              }
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x1c0));
              if ((*(char *)(param_1 + 0x390) == '\0') &&
                 (plVar2 = *(long **)(param_1 + 0x2a0), plVar2 != (long *)0x0)) {
                lVar5 = *(long *)(param_1 + 0x380);
                plVar3 = (long *)plVar2[5];
                for (lVar4 = plVar2[7] << 3; plVar6 = plVar3, lVar4 != 0; lVar4 = lVar4 + -8) {
                  while( true ) {
                    plVar3 = plVar6 + 1;
                    lVar1 = *plVar6;
                    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x1c) == 0)) break;
                    (**(code **)(param_1 + 0x28))(*(undefined8 *)(lVar1 + 0x20));
                    lVar4 = lVar4 + -8;
                    plVar6 = plVar3;
                    if (lVar4 == 0) goto LAB_00d2dcdc;
                  }
                }
LAB_00d2dcdc:
                if (plVar2[2] != 0) {
                  uVar7 = 0;
                  do {
                    (**(code **)(plVar2[4] + 0x10))(*(undefined8 *)(*plVar2 + uVar7 * 8));
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < (ulong)plVar2[2]);
                }
                (**(code **)(plVar2[4] + 0x10))(*plVar2);
                if (plVar2[0x23] != 0) {
                  uVar7 = 0;
                  do {
                    (**(code **)(plVar2[0x25] + 0x10))(*(undefined8 *)(plVar2[0x21] + uVar7 * 8));
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < (ulong)plVar2[0x23]);
                }
                (**(code **)(plVar2[0x25] + 0x10))(plVar2[0x21]);
                if (plVar2[7] != 0) {
                  uVar7 = 0;
                  do {
                    (**(code **)(plVar2[9] + 0x10))(*(undefined8 *)(plVar2[5] + uVar7 * 8));
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < (ulong)plVar2[7]);
                }
                (**(code **)(plVar2[9] + 0x10))(plVar2[5]);
                if (plVar2[0xc] != 0) {
                  uVar7 = 0;
                  do {
                    (**(code **)(plVar2[0xe] + 0x10))(*(undefined8 *)(plVar2[10] + uVar7 * 8));
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < (ulong)plVar2[0xc]);
                }
                (**(code **)(plVar2[0xe] + 0x10))(plVar2[10]);
                if (plVar2[0x11] != 0) {
                  uVar7 = 0;
                  do {
                    (**(code **)(plVar2[0x13] + 0x10))(*(undefined8 *)(plVar2[0xf] + uVar7 * 8));
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < (ulong)plVar2[0x11]);
                }
                (**(code **)(plVar2[0x13] + 0x10))(plVar2[0xf]);
                plVar3 = (long *)plVar2[0x14];
                while (plVar3 != (long *)0x0) {
                  plVar3 = (long *)*plVar3;
                  (**(code **)(plVar2[0x19] + 0x10))();
                }
                plVar3 = (long *)plVar2[0x15];
                while (plVar3 != (long *)0x0) {
                  plVar3 = (long *)*plVar3;
                  (**(code **)(plVar2[0x19] + 0x10))();
                }
                plVar3 = (long *)plVar2[0x1a];
                while (plVar3 != (long *)0x0) {
                  plVar3 = (long *)*plVar3;
                  (**(code **)(plVar2[0x1f] + 0x10))();
                }
                plVar3 = (long *)plVar2[0x1b];
                while (plVar3 != (long *)0x0) {
                  plVar3 = (long *)*plVar3;
                  (**(code **)(plVar2[0x1f] + 0x10))();
                }
                if (lVar5 == 0) {
                  (**(code **)(param_1 + 0x28))(plVar2[0x2c]);
                  (**(code **)(param_1 + 0x28))(plVar2[0x29]);
                }
                (**(code **)(param_1 + 0x28))(plVar2);
              }
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x2e0));
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x370));
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x10));
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x58));
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x2e8));
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x1d0));
              if (*(code **)(param_1 + 0x1e8) != (code *)0x0) {
                (**(code **)(param_1 + 0x1e8))(*(undefined8 *)(param_1 + 0x1d8));
              }
                    /* WARNING: Could not recover jumptable at 0x00d2df34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(param_1 + 0x28))(param_1);
              return;
            }
            *(undefined8 *)(param_1 + 0x240) = 0;
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          (**(code **)(param_1 + 0x28))();
        } while( true );
      }
      *(undefined8 *)(param_1 + 0x2b8) = 0;
      plVar2 = (long *)*plVar3;
      (**(code **)(param_1 + 0x28))(plVar3[8]);
      lVar4 = plVar3[10];
    }
    else {
      lVar5 = *plVar2;
      (**(code **)(param_1 + 0x28))(plVar2[8]);
      lVar4 = plVar2[10];
      plVar3 = plVar2;
      plVar2 = (long *)lVar5;
    }
    while (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 8);
      (**(code **)(param_1 + 0x28))(*(undefined8 *)(lVar4 + 0x20));
      (**(code **)(param_1 + 0x28))(lVar4);
      lVar4 = lVar5;
    }
    (**(code **)(param_1 + 0x28))(plVar3);
  } while( true );
}


