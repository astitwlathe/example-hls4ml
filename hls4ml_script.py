import hls4ml

#Fetch a keras model from our example repository
#This will download our example model to your working directory and return an example configuration file
config = hls4ml.utils.fetch_example_model('KERAS_3layer.json')

print(config) #You can print it to see some default parameters

#Convert it to a hls project
hls_model = hls4ml.converters.keras_to_hls(config)

# Print full list of example model if you want to explore more
hls4ml.utils.fetch_example_list()

#Use Vivado HLS to synthesize the model
#This might take several minutes
hls_model.build(reset=False, csim=True, cosim=True, validation=True, synth=True, vsynth=True, export=True)

#Print out the report if you want
hls4ml.report.read_vivado_report('my-hls-test')
