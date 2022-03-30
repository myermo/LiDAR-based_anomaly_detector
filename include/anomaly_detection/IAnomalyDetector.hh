#ifndef ANOMALYDETECTOR_INTERFACE_H
#define ANOMALYDETECTOR_INTERFACE_H

#include <string>
#include <vector>

#include "models/CharacteristicsVector.hh"
#include "models/Model.hh"

class IAnomalyDetector {
   public:
    /**
     * Destructor virtual
     */
    virtual ~IAnomalyDetector() {}

    /**
     * Carga los modelos disponibles del archivo especificado
     * @param
     */
    virtual void loadModels(std::string path) = 0;
    virtual std::vector<Model> getModels() = 0;
    virtual void setModel(Model m) = 0;
    virtual void compare(CharacteristicsVector cv) = 0;

   protected:
    std::thread executionThread;  ///< Hilo de ejecución del detector de anomalías
};

#endif  //ANOMALYDETECTOR_INTERFACE_H