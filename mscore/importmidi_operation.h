#ifndef IMPORTMIDI_OPERATION_H
#define IMPORTMIDI_OPERATION_H


namespace Ms {

// all enums below should have default indexes like 0, 1, 2...
// text names for enum items are in OperationsModel class

struct Operation
      {
      enum Type {
            DO_IMPORT = 0,
            QUANT_VALUE,
            QUANT_REDUCE,

            DO_LHRH_SEPARATION,
            LHRH_METHOD,
            LHRH_SPLIT_OCTAVE,
            LHRH_SPLIT_NOTE,

            USE_DOTS
      } type;

      QVariant value;

      enum QuantValue {
            SHORTEST_IN_BAR = 0,
            FROM_PREFERENCES,
            N_4,
//            N_4_triplet,
            N_8,
//            N_8_triplet,
            N_16,
//            N_16_triplet,
            N_32,
//            N_32_triplet,
            N_64
            };
//#undef FIXED_PITCH
      enum LHRHMethod {
            HAND_WIDTH = 0,
            SPECIFIED_PITCH
            };

      enum LHRHOctave {
            C_1 = 0,
            C0,
            C1,
            C2,
            C3,
            C4,
            C5,
            C6,
            C7,
            C8,
            C9
            };

      enum LHRHNote {
            C = 0,
            Cis,
            D,
            Dis,
            E,
            F,
            Fis,
            G,
            Gis,
            A,
            Ais,
            H
            };
      };

} // namespace Ms


#endif // IMPORTMIDI_OPERATION_H
